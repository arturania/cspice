#!/bin/sh

WASM_LOOKUP='var wasmBinaryFile="cspice.wasm";if(!isDataURI(wasmBinaryFile)){wasmBinaryFile=locateFile(wasmBinaryFile)}'
WASM_LOOKUP_FIX='var wasmBinaryFile="/spice/cspice.wasm";'

for platform in 'node' 'worker'
do
  JS="cspice.$platform.js"

  if [ $platform = "worker" ]; then
    filesystem='-lidbfs.js'
    methods='["FS","IDBFS","ccall","cwrap"]'
  else
    filesystem=''
    methods='["FS","ccall","cwrap"]'
  fi

  emcc ../lib/libcspice_wasm.a -o cspice.js --pre-js ./pre.js \
    --embed-file ../kernels/wasm.tm@/wasm.tm \
    --embed-file ../kernels/fk/itrf93.tf@/itrf93.tf \
    -O2 \
    -s MODULARIZE=1 \
    -s EXPORT_ES6=1 \
    -s USE_ES6_IMPORT_META=0 \
    -s WASM=1 \
    -s ENVIRONMENT="$platform" \
    -s TOTAL_MEMORY=134217728 \
    $filesystem \
    -s EXPORT_NAME=CSpice \
    -s EXTRA_EXPORTED_RUNTIME_METHODS="$methods" \
    -s EXPORTED_FUNCTIONS='[
      "_malloc",
      "_free",
      "_tkvrsn_c",
      "_erract_c",
      "_errprt_c",
      "_failed_c",
      "_getmsg_c",
      "_furnsh_c",
      "_bodc2n_c",
      "_str2et_c",
      "_spkez_c",
      "_vnorm_c"
    ]'

  mv cspice.js $JS

  # disable eslint on the generated JavaScript
  sed -i.old '1s;^;\/* eslint-disable *\/;' $JS

  if [ $platform = "worker" ]; then
    # Replace the relative path with an absolute one, necessary to access public files
    sed -i.old "s|$WASM_LOOKUP|$WASM_LOOKUP_FIX|" $JS
  fi

  rm $JS.old
done
