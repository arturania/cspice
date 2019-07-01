 
SPICE Toolkit Installation Instructions
===========================================================================
 
   This document describes how to install the CSPICE package on PC
   computers using MICROSOFT WINDOWS operating system and MICROSOFT VISUAL
   C++ 64BIT compiler. This Microsoft product includes a command line C
   compiler. We recommend that at a minimum you look over the sections
   "System Requirements" and "Installing the CSPICE Package" before you
   begin installing the CSPICE package.
 
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
 
   Before you begin installing the CSPICE package, you should make sure
   that you have approximately 150 Megabytes of free diskspace. After the
   toolkit has been imported you can delete the file cspice.zip to free up
   approximately half of the space used during the installation.
 
 
Time for Installation.
 
   The amount of time required to perform the installation varies, but a
   typical installation takes a few minutes.
 
 
If you already have a CSPICE Package
 
   You should backup and move (or remove) any previous editions of the
   CSPICE package from the directory where you plan to install this
   toolkit. Otherwise this toolkit may be merged with the previous edition
   leading to unpredictable results.
 
 
Installing the SPICE Package
--------------------------------------------------------
 
   You should move the file cspice.zip to the directory where you want to
   install the SPICE CSPICE Package. (Note: If you are copying the
   "cspice.zip" file via ftp you should copy it in "binary" mode.)
 
   After that you should un-zip this file using the Windows built-in un-zip
   option or a third party un-zip utility. Un-zipping cspice.zip will
   create the toolkit directory structure and place the toolkit files in
   that directory structure.
 
   If you experience problems with the installation process, re-check to
   make sure you have adequate disk space for the toolkit extraction.
 
 
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
   recompile all libraries and programs provided in this package, open DOS
   window using ``command'' program, change to the top level directory, and
   run the ``makeall.bat'' script as follows:
 
      .\makeall.bat
 
   To recompile all Java classes (if any) provided in this package, change
   to the ``src\JNISpice'' subdirectory and run the ``mkjnijava.bat''
   script as follows:
 
      .\mkjnijava.bat
 
   If you experience problems performing thus(se) operation(s), contact
   NAIF for further assistance.
 
   This package has been pre-compiled on a PC with Intel Xeon CPU running
   Windows 7 Professional SP1 using Microsoft Visual Studio 15.0 C compiler
   in 64-bit mode. The version of IDL installed on this worstation was 8.1.
   The version of MATLAB installed on this workstation was R2014b. The
   version of Java installed on this workstation was 1.8.
 
 
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
 
 
C compiler
 
   It is assumed that you have installed the Microsoft C compiler and that
   your environment is set up so that you can simply type "CL" to invoke
   the command-line C compiler. The compiler requires that a number of
   environment variables be set in advance; all of the requisite variables
   can be defined by executing the VCVARSAMD64.BAT batch file supplied with
   the compiler.
 
 
Java compiler
 
   It is assumed that you have a working Java compiler and that your
   environment is set up so that you can simply type "javac" to invoke the
   compiler.
 
