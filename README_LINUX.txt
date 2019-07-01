 
Instructions for Importing the CSPICE Toolkit
===========================================================================
 
   This document describes how to import the CSPICE package on PC computers
   using LINUX operating system and GCC 64BIT compiler. We recommend that
   at a minimum you look over the sections "System Requirements" and
   "Importing the CSPICE Package" before you begin importing the CSPICE
   package.
 
   We also strongly recommend that you not try to port this package to any
   other environment without first consulting NAIF. By saying "porting" we
   mean trying to build this package on a different computer hardware or
   operating system type, or using a different compiler brand or a
   different version of the compiler used to build this package, or
   changing any compile options, such as optimization level, that are used
   in the script(s) building the libraries included in this package.
   Detailed information about the system on which this package was compiled
   and tested is provided in the section "Recompiling the Toolkit" below.
 
   In addition to this document there are two text files provided with this
   package that may be of interest:
 
      dscriptn.txt   contains a description of the directory structure
                     and contents of the CSPICE package.
 
      whats.new      describes new features available in this version
                     of the CSPICE package.
 
 
System Requirements
--------------------------------------------------------
 
   Before you begin importing the CSPICE package, you should make sure that
   you have approximately 150 Megabytes of free diskspace. After the
   toolkit has been imported you can delete the file cspice.tar to free up
   approximately half of the space used during the installation.
 
 
Time for Importing.
 
   The amount of time required to perform the import varies, but importing
   typically takes a few minutes.
 
 
If you already have a CSPICE Package
 
   You should backup and move (or remove) any previous editions of the
   CSPICE Package from the directory where you plan to import this toolkit.
   Otherwise this toolkit may be merged with the previous edition leading
   to unpredictable results.
 
 
Importing the CSPICE Package
--------------------------------------------------------
 
   You should move the following files to the directory where you want to
   import the CSPICE Package.
 
      cspice.tar.Z
      importCSpice.csh
 
   (Note: If you are copying the ".tar.Z" file via ftp you should copy it
   in "binary" mode. Use "ascii" mode to copy the ".csh" file.)
 
   Now type the following command.
 
      /bin/csh -f importCSpice.csh
 
   The script importCSpice.csh will uncompress and untar the toolkit and,
   on platforms where NAIF anticipates that it is necessary, compile and
   link all source code products.
 
   If you experience problems with the import process, first refer to the
   section at the end of this document entitled "Importing Problems". If
   you can't resolve the import problem there, contact NAIF for assistance.
 
 
Additional Instructions
--------------------------------------------------------
 
   For CSPICE users additional instructions regarding linking their
   applications to the CSPICE library are provided in the CSPICE Required
   Reading document -- ``doc/cspice.req'' (plain text format) and
   ``doc/html/req/cspice.html'' (HTML format) included in the package.
 
   For Icy users additional instructions regarding registering the ICY DLM
   in in IDL are provided in the ``Preparing the Environment'' section of
   the ICY Required Reading document -- ``doc/icy.req'' (plain text format)
   and ``doc/html/req/icy.html'' (HTML format) included in the package.
 
   For Mice users additional instructions regarding using MICE in MATLAB
   are provided in the ``Preparing the Environment'' section of the MICE
   Required Reading document -- ``doc/mice.req'' (plain text format) and
   ``doc/html/req/mice.html'' (HTML format) included in the package.
 
 
Toolkit Documentation
--------------------------------------------------------
 
   The Toolkit contains two styles of documentation: a plain text version
   and a hyperlinked html version. NAIF recommends you use the html version
   because of the convenience of the hyperlinking. To do that load the top
   level index of the html documentation -- cspice/doc/html/index.html --
   into a web browser.
 
 
Recompiling the Toolkit
--------------------------------------------------------
 
   All libraries and executable programs in this package have been
   pre-compiled and built for your convenience. Usually it is not necessary
   to recompile them after you have imported the Toolkit -- you can link to
   the libraries and run the executables ``as is''. In some cases though,
   for example if you are using an earlier version of the same compiler
   and/or operating system, it may be necessary to re-build the Toolkit. To
   recompile all libraries and programs provided in this package, change to
   the top level directory and run the ``makeall.csh'' script as follows:
 
      /bin/csh -f makeall.csh
 
   To recompile all Java classes (if any) provided in this package, change
   to the ``src/JNISpice'' subdirectory and run the ``mkjnijava.csh''
   script as follows:
 
      /bin/csh -f mkjnijava.csh
 
   If you experience problems performing thus(se) operation(s), contact
   NAIF for further assistance.
 
   This package has been pre-compiled on a PC with Intel(R) Xeon(R) CPU
   running Red Hat Enterprise 5.0 Linux using GNU C 4.3.3 compiler in
   64-bit mode. The version of IDL installed on this workstation was 8.1.
   The version of MATLAB installed on this workstation was 7.10.0 (R2010a).
   The version of Java installed on this workstation was 1.5.
 
 
Disclaimer
--------------------------------------------------------
 
   THIS SOFTWARE AND ANY RELATED MATERIALS WERE CREATED BY THE CALIFORNIA
   INSTITUTE OF TECHNOLOGY (CALTECH) UNDER A U.S. GOVERNMENT CONTRACT WITH
   THE NATIONAL AERONAUTICS AND SPACE ADMINISTRATION (NASA). THE SOFTWARE
   IS TECHNOLOGY AND SOFTWARE PUBLICLY AVAILABLE UNDER U.S. EXPORT LAWS AND
   IS PROVIDED "AS-IS" TO THE RECIPIENT WITHOUT WARRANTY OF ANY KIND,
   INCLUDING ANY WARRANTIES OF PERFORMANCE OR MERCHANTABILITY OR FITNESS
   FOR A PARTICULAR USE OR PURPOSE (AS SET FORTH IN UNITED STATES UCC
   SECTIONS 2312-2313) OR FOR ANY PURPOSE WHATSOEVER, FOR THE SOFTWARE AND
   RELATED MATERIALS, HOWEVER USED.
 
   IN NO EVENT SHALL CALTECH, ITS JET PROPULSION LABORATORY, OR NASA BE
   LIABLE FOR ANY DAMAGES AND/OR COSTS, INCLUDING, BUT NOT LIMITED TO,
   INCIDENTAL OR CONSEQUENTIAL DAMAGES OF ANY KIND, INCLUDING ECONOMIC
   DAMAGE OR INJURY TO PROPERTY AND LOST PROFITS, REGARDLESS OF WHETHER
   CALTECH, JPL, OR NASA BE ADVISED, HAVE REASON TO KNOW, OR, IN FACT,
   SHALL KNOW OF THE POSSIBILITY.
 
   RECIPIENT BEARS ALL RISK RELATING TO QUALITY AND PERFORMANCE OF THE
   SOFTWARE AND ANY RELATED MATERIALS, AND AGREES TO INDEMNIFY CALTECH AND
   NASA FOR ALL THIRD-PARTY CLAIMS RESULTING FROM THE ACTIONS OF RECIPIENT
   IN THE USE OF THE SOFTWARE.
 
 
How to Contact NAIF
--------------------------------------------------------
 
   If you have problems or suggestions you can contact NAIF via U.S. Mail,
   electronic mail or phone as specified below.
 
   U.S. Mail address:
 
      Charles Acton
      Jet Propulsion Laboratory
      Navigation Ancillary Information Facility
      4800 Oak Grove Drive
      Mail Stop 301-125L
      Pasadena, CA 91109
 
   Electronic mail address:
 
      Charles.H.Acton@jpl.nasa.gov
      Nathaniel.J.Bachman@jpl.nasa.gov
      Boris.V.Semenov@jpl.nasa.gov
      Edward.D.Wright@jpl.nasa.gov
 
   Phone number:
 
      (818) 354-3869 (Chuck Acton)
      (818) 354-7454 (Nat Bachman)
      (818) 354-8136 (Boris Semenov)
      (818) 354-0371 (Ed Wright)
 
 
Importing Problems
--------------------------------------------------------
 
   Although the import script does not make a lot of assumptions about your
   computing environment, it must make a few. Importing problems usually
   occur because one of these assumptions is not met by the system where
   the CSPICE package is being imported.
 
 
Shell Prompt
 
   In several examples below, we will talk about interacting with the UNIX
   shell. We shall assume that the shell prompts you for input by
   displaying the string:
 
      myprompt>
 
   What your system displays will almost certainly be different.
 
 
UNIX SHELL
 
   It is assumed that you have the UNIX C-shell installed on your machine.
 
   To see if you have the C-shell available on your system type the
   following command.
 
      myprompt> ls -1 /bin/csh
 
   You should get the following response from your process.
 
      /bin/csh
 
   If you don't get this, your system doesn't satisfy the import script
   assumptions. You can't import the CSPICE package using these
   instructions.
 
 
uncompress and tar
 
   The CSPICE package is delivered via a compressed "tar" file. You must
   have the "uncompress" and "tar" program present on your system to import
   the toolkit. You can find out if you have these programs by typing:
 
      mypropmt> which uncompress
      myprompt> which tar
 
   Your system should respond with messages similar to the following
 
      /usr/bin/uncompress
      /bin/tar
 
   If it doesn't you won't be able to extract the toolkit from the "tar"
   file.
 
 
C compiler
 
   It is assumed that you have a working Gnu C compiler and that your
   environment is set up so that you can simply type "gcc" to invoke the
   compiler. Moreover, it is assumed that "gcc" is not an alias. You can
   determine whether or not "gcc" is an alias for some other command by
   typing:
 
      myprompt> alias gcc
 
   If gcc is an not an alias, the shell responds by re-issuing the shell
   prompt. In this case you've passed the last hurdle and you should be
   ready to import the CSPICE package.
 
   If "gcc" is an alias, how "gcc" is aliased will be displayed. In this
   case you need to perform the following two commands.
 
      myprompt> unalias gcc
      myprompt> which gcc
 
   The second command should yield a fully qualified path for your Gnu C
   compiler. If it doesn't you need to find out which directory contains
   the C compiler and add this directory to your path.
 
 
Java compiler
 
   It is assumed that you have a working Java compiler and that your
   environment is set up so that you can simply type "javac" to invoke the
   compiler.
 
