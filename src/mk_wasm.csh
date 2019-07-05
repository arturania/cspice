#! /bin/csh
#
#   PC-LINUX version.
#
#   This script is a more or less generic library/executable
#   builder for CSPICE products.  It assumes that it is executed
#   from one of the "product" directories in a tree that looks like
#   the one displayed below:
#
#                      package
#                         |
#                         |
#       +------+------+------+------+------+
#       |      |      |      |      |      | 
#     data    doc    etc    exe    lib    src
#                                          |
#                                          |
#                         +----------+----------+------- ... ------+
#                         |          |          |                  |
#                     product_1  product_2  product_3    ...   product_n
#
#   Here's the basic strategy:
#
#     1)  Compile all of the .c files in the current directory
#
#     2)  If there are no .pgm files in the current directory this
#         is assumed to be a library source directory.  The name
#         of the library is the same as the name of the product.
#         The library is placed in the "lib" directory in the tree
#         above.  The script is then done.
# 
#         If there are .pgm files and there were some .c
#         files compiled the objects are gathered together in the
#         current directory into a library called locallib.a.
#
#     3)  If any *.pgm files exist in the current directory, compile 
#         them and add their objects to locallib.a.  Create a C main
#         program file from the uniform CSPICE main program main.x.
#         Compile this main program and link its object with locallib.a,
#         ../cspice.a and ../csupport.a. The output 
#         executables have an empty extension.  The executables are
#         placed in the "exe" directory in the tree above.
#         
#   The environment variable TKCOMPILEOPTIONS containing compile options 
#   is optionally set. If it is set prior to executing this script,
#   those options are used. It it is not set, it is set within this
#   script as a local variable.
#
#   References:
#   ===========
#
#   "Unix Power Tools", page 11.02 
#      Use the "\" character to unalias a command temporarily.
#        
#   "A Practical Guide to the Unix System"
#
#   "The Unix C Shell Field Guide"
#
#   Change History:
#   ===============
#
#   Version 6.2.0  Nov. 14, 2006  Boris Semenov 
#
#      Added -fPIC and -m32 compile options.
#
#   Version 6.1.0  October 6, 2005  Boris Semenov
#
#      Put -O2 optimization back in because the problem that it caused
#      was solved in the N0059 toolkit.    
#
#   Version 6.0.0  April 20, 2000  Bill Taber
#
#      Removed O2 optimization as it caused some loops to 
#      not terminate.    
#
#   Version 5.0.0  Feb. 09, 1999  Nat Bachman
#
#      Now uses O2 optimization.      
#
#   Version 4.0.0  Nov. 02, 1998  Nat Bachman
#
#      Updated to use an environment variable to designate the C
#      compiler to use.
#
#   Version 3.0.0  Oct. 31, 1998  Nat Bachman
#
#      Updated to make use of uniform C main routine main.x.
#
#   Version 2.0.0  Feb. 04, 1998  Nat Bachman
#
#      Modified to handle C code.  Sun/Solaris/Native cc Version.
#
#   Version 1.0.0  Dec  8, 1995  Bill Taber
#


#
#  Choose your compiler.
#
if ( $?TKCOMPILER ) then

   echo " "
   echo "      Using compiler: "
   echo "      $TKCOMPILER"

else

   set TKCOMPILER  =  "emcc"
   echo " "
   echo "      Setting default compiler:"
   echo $TKCOMPILER
   
endif


#
#  What compile options do we want to use? If they were 
#  set somewhere else, use those values.  The same goes
#  for link options.
#
if ( $?TKCOMPILEOPTIONS ) then
   echo " "
   echo "      Using compile options: "
   echo "      $TKCOMPILEOPTIONS"
else
#
#  Options:
#
#     -ansi              Compile source as ANSI C
#
#     -DNON_UNIX_STDIO   Don't assume standard Unix stdio.h 
#                        implementation
#
#     -m32               generate 32-bit code
#
   set TKCOMPILEOPTIONS = "-c -O2 -I../include -Wno-parentheses -Wno-shift-op-parentheses -Wno-logical-op-parentheses -Wno-bitwise-op-parentheses -Wno-dangling-else -Wno-format -Wno-implicit-int"
   # -ansi -O2 -m32 -DNON_UNIX_STDIO -D_POSIX_C_SOURCE

   echo " "
   echo "      Setting default compile options:"
   echo "      $TKCOMPILEOPTIONS"
endif

if ( $?TKLINKOPTIONS ) then
   echo " "
   echo "      Using link options: "
   echo "      $TKLINKOPTIONS"
else
   set TKLINKOPTIONS = "" # "-lm -m32"
   echo " "
   echo "      Setting default link options:"
   echo "      $TKLINKOPTIONS"
endif

echo " "

#
#   Determine a provisional LIBRARY name.
#
set LIBRARY = "../lib/libcspice_wasm"

#
#  Are there any *.c files that need to be compiled?
#
\ls *.c >& /dev/null

if ( $status == 0 ) then

  $TKCOMPILER *.c $TKCOMPILEOPTIONS

endif


echo " "

#
#  If object files exist, we need to create an object library.
#

\ls *.o >& /dev/null

if ( $status == 0 ) then

   echo "      Inserting objects in the library $LIBRARY ..."
   emar rcsv $LIBRARY.a *.o
   \rm                *.o
   echo " "

endif


#
#  Cleanup.
#

echo " "

\ls *.o >& /dev/null

if ( $status == 0 ) then
   \rm *.o
endif

exit 0
