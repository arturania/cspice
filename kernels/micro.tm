\begindata

PATH_VALUES     = ( 'cspice/kernels/fk',
                    'cspice/kernels/pck',
                    'cspice/kernels/lsk',
                    'cspice/kernels/spk' )
 
PATH_SYMBOLS    = ( 'FK', 'PCK', 'LSK', 'SPK' )
 
KERNELS_TO_LOAD = ( '$FK/earth_assoc_itrf93.tf',
                    '$PCK/earth_predict.bpc',
                    '$PCK/earth_720101_070426.bpc',
                    '$PCK/earth_latest_high_prec.bpc',
                    '$PCK/pck00010.tpc',
                    '$LSK/latest_leapseconds.tls',
                    '$SPK/de440s.bsp' )

\begintext
