rem
rem    mkprodct script for JNISpice C dynamically linked library; Windows 
rem    MS Visual C++/32bit version.
rem
rem
rem    Version 1.0.0  21-JAN-2010 (EDW) (NJB) (BVS)
rem
rem
rem Assign the compile command.
rem
set cl= /c /O2 -D_COMPLEX_DEFINED -DMSDOS -DOMIT_BLANK_CC -DWIN32  -I. -I..\..\include -I..\tutils_c

rem
rem Compile.
rem
for %%f in (*.c) do cl %%f 

dir /b *.obj > temp.lst

rem
rem  Link the DLL
rem
link /DLL /OUT:JNISpice.dll /IMPLIB:JNISpice.lib @temp.lst ..\..\lib\tutils_c.lib ..\..\lib\csupport.lib ..\..\lib\cspice.lib

rem
rem Delete the intermediate files.
rem
del *.obj
rem del temp.lst
rem del JNISpice.lib
rem del JNISpice.exp

rem
rem Move the DLL to the lib directory.
rem
move JNISpice.dll ..\..\lib

echo Done.

