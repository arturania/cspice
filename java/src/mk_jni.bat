rem 
rem    mkjnijava script for JNISpice Java code; PC/Windows version.
rem
rem
rem    JNISpice version 1.0.0  16-FEB-2010 (EDW) (NJB) (BVS)
rem
rem

@echo off

echo
echo Deleting existing classes
del spice\basic\*.class
del spice\testutils\*.class
del spice\tspice\*.class
for %%j in ( *.class ) do del ..\..\exe\%%j
del *.class

echo
echo Compiling Java source
javac spice\basic\*.java
javac spice\testutils\*.java
javac spice\tspice\*.java
javac *.java

echo
echo Copying Java executables to ..\..\exe
copy *.class ..\..\exe

echo Done.
