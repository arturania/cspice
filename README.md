# CSPICE Toolkit

This is unofficial copy of [NASA/JPL SPICE Toolkit for C](https://naif.jpl.nasa.gov/naif/toolkit.html) patched for cross-platform compatibility (Linux, macOS, Windows and Web).

Please refer to the [original SPICE Toolkit for C documentation](https://naif.jpl.nasa.gov/pub/naif/toolkit_docs/C/index.html).

<div align="center"><img src="/doc/images/spice_logo.png" align="middle" width="512px" height="158px"/></div>

## Build

### Linux

```sh
cd src
./mk_linux.csh
```

The resulting library path is: `<repository_root>/lib/libcspice.a`

### macOS

```sh
cd src
./mk_mac.csh
```

The resulting library path is: `<repository_root>/lib/libcspice.a`

### Windows

#### Dynamic-Link Library (.dll)

From Visual Studio command line:

```bat
cd <repository_root>\src
mk_dll.bat
```

The resulting library files are:

- `<repository_root>\bin\cspice.dll`
- `<repository_root>\lib\cspice_dll.lib`
- `<repository_root>\lib\cspice_dll.exp`

#### Static Library (.lib)

From Visual Studio command line:

```bat
cd <repository_root>\src
mk_static.bat
```

The resulting library file is: `<repository_root>\lib\cspice.lib`

### WebAssembly

1. Install [Emscripten](https://emscripten.org)

2. Build the static library:

    ```sh
    cd src
    ./mk_wasm.csh
    ```

    The resulting library path is: `<repository_root>/lib/libcspice_wasm.a`

3. Build `cspice.wasm` and JavaScript glue code for use in Web Workers (`cspice.worker.js`) and in Node.js (`cspice.node.js`)

    ```sh
    cd wasm
    ./build_wasm.sh
    ```

    Modify `EXPORTED_FUNCTIONS` in `build_wasm.sh` to include all required SPICE functions into `.wasm`/`.js` files.

    Modify `kernels/wasm.tm` to select the SPICE kernels you want to load.

    Note that `wasm.tm` and `itrf93.tf` kernels are **embedded** into the JavaScript glue code.

### How to use CSpice WebAssembly in React app

It is recommended to use [Create React App](https://create-react-app.dev/) (and don't eject it) since it's greatly simplifies the app maintenance.

1. Copy `cspice.worker.js` to `src/spice/cspice.js` (Development and Production)

2. Copy `cspice.node.js` to `src/spice/__mocks__/cspice.js` (Testing with Jest)

3. Copy (or symlink) `cspice.wasm` to `public/spice` and `src/spice/__mocks__` folders

4. Copy (or symlink) all SPICE kernels you want to use to the respective folders: `public/spice/kernels/(fk|lsk|pck|spk)`

5. Create file system initialization code, e.g.:

    `src/spice/filesystem.js`

    ```JavaScript
    export function mountFileSystem(instance) {
      const fs = instance.FS;
      fs.mkdir('/kernels');
      fs.mount(instance.IDBFS, {}, '/kernels');
      // initialize file system with data from persistent source
      fs.syncfs(true, (err) => {
        if (err) return;
        // link missing kernels
        try {
          fs.lookupPath('/kernels/leapseconds.tls', {});
        } catch (err) {
          fs.createLazyFile('/kernels', 'leapseconds.tls', '/spice/kernels/lsk/leapseconds.tls', true, false));
        }
        try {
          fs.lookupPath('/kernels/de440s.bsp', {});
        } catch (err) {
          fs.createLazyFile('/kernels', 'de440s.bsp', '/spice/kernels/spk/de440s.bsp', true, false));
        }
        // save file system to persistent source
        fs.syncfs(() => null);
      });
    }
    ```

    `src/spice/__mocks__/filesystem.js`

    ```JavaScript
    import { readFileSync } from 'fs';

    function copyFile(fileSystem, dest, src) {
      const stream = fileSystem.open(dest, 'w');
      const data = readFileSync(src);
      fileSystem.write(stream, data, 0, data.length, 0);
      fileSystem.close(stream);
    }

    export function mountFileSystem(instance) {
      instance.FS.mkdir('/kernels');
      copyFile(instance.FS, '/kernels/leapseconds.tls', '/spice/kernels/lsk/leapseconds.tls');
      copyFile(instance.FS, '/kernels/de440s.bsp', '/spice/kernels/spk/de440s.bsp');
    }
    ```

    **Make sure you created/copied all the required kernel files in both Web Worker and Node.js (mocked) code.**

6. Create Web Worker and its wrapper for Jest:

    `src/workers/spice.worker.js`

    ```JavaScript
    import cSpice from '../spice/cspice';
    import { mountFileSystem } from '../spice/filesystem';

    const instance = await cSpice();
    mountFileSystem(instance);

    export tkvrsn_c = async (str) => instance.ccall('tkvrsn_c', 'string', ['string'], [str]);
    ```

    `src/workers/__mocks__/spice.worker.js`

    ```JavaScript
    import * as SpiceWorker from '../spice.worker';
    const spiceWorker = () => SpiceWorker;
    export default spiceWorker;
    ```

7. Install [workerize-loader](https://github.com/developit/workerize-loader)

8. Add Jest config `moduleNameMapper` option to `package.json`:

    ```json
    "jest": {
      "moduleNameMapper": {
        "^.*/spice/(.*)": "<rootDir>/src/spice/__mocks__/$1",
        "^workerize-loader!(.*)/workers/(.*)": "<rootDir>/src/workers/__mocks__/$2"
      }
    }
    ```

9. Create React hook and use it in functional components:

    `src/hooks/useSpiceWorker.js`

    ```JavaScript
    import createWorker from 'workerize-loader!../workers/spice.worker';
    const spiceWorker = createWorker();
    export const useSpiceWorker = () => spiceWorker;
    ```

    `src/components/Component.jsx`

    ```JavaScript
    import React, { useState, useEffect } from 'react';
    import { useSpiceWorker } from '../hooks/useSpiceWorker';

    export const Component = () => {
      const { tkvrsn_c } = useSpiceWorker();
      const [ver, setVer] = useState();
      useEffect(() => {
        tkvrsn_c('TOOLKIT').then(setVer).catch(({ message }) => setVer(message));
      }, [tkvrsn_c]);
      return <div>{ver || 'Loading...'}</div>;
    };
    ```

10. If you use [Storybook](https://storybook.js.org/):

    Set `globalObject` to `'this'` in Webpack config, e.g. in `.storybook/main.js`:

    ```JavaScript
    module.exports = {
      webpackFinal: (config) => {
        config.output.globalObject = 'this';
        return config;
      }
    };
    ```
