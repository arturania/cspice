# CSPICE Toolkit

This is unofficial copy of [NASA/JPL SPICE Toolkit for C](https://naif.jpl.nasa.gov/naif/toolkit.html) patched for cross-platform compatibility (Linux, macOS and Windows).

Please refer to the [original SPICE Toolkit for C documentation](https://naif.jpl.nasa.gov/pub/naif/toolkit_docs/C/index.html).

## Build

### Linux

```csh
cd src
./mk_linux.csh
```

The resulting library path is: `<repository_root>/lib/libcspice.a`

### macOS

```csh
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
