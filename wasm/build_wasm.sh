#!/bin/sh
emcc ../lib/libcspice_wasm.a -o cspice.js --pre-js ./pre.js \
  -O2 \
  -s MODULARIZE=1 \
  -s EXPORT_ES6=1 \
  -s WASM=1 \
  -s TOTAL_MEMORY=134217728 \
  -s EXTRA_EXPORTED_RUNTIME_METHODS='["FS"]' \
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
