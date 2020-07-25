# MinGW Compiler
MinGW, a contraction of "Minimalist GNU for Windows", is a minimalist development environment for native Microsoft Windows applications.

MinGW is a registered trademark of Software in the Public Interest Inc., registration number 86017856; it has been registered on behalf of MinGW.org, and its use by any other project is unauthorized.

MinGW provides a complete Open Source programming tool set which is suitable for the development of native MS-Windows applications, and which do not depend on any 3rd-party C-Runtime DLLs. (It does depend on a number of DLLs provided by Microsoft themselves, as components of the operating system; most notable among these is MSVCRT.DLL, the Microsoft C runtime library. Additionally, threaded applications must ship with a freely distributable thread support DLL, provided as part of MinGW itself).

MinGW compilers provide access to the functionality of the Microsoft C runtime and some language-specific runtimes. MinGW, being Minimalist, does not, and never will, attempt to provide a POSIX runtime environment for POSIX application deployment on MS-Windows. If you want POSIX application deployment on this platform, please consider Cygwin instead.

Primarily intended for use by developers working on the native MS-Windows platform, but also available for cross-hosted use, (see note below -- you may need to follow the "read more" link to see it), MinGW includes:

- A port of the GNU Compiler Collection (GCC), including C, C++, ADA and Fortran compilers;
- GNU Binutils for Windows (assembler, linker, archive manager)
- A command-line installer, with optional GUI front-end, (mingw-get) for MinGW and MSYS deployment on MS-Windows.
- A GUI first-time setup tool (mingw-get-setup), to get you up and running with mingw-get.

__MSYS__, a contraction of "Minimal SYStem", is a Bourne Shell command line interpreter system. Offered as an alternative to Microsoft's cmd.exe, this provides a general purpose command line environment, which is particularly suited to use with MinGW, for porting of many Open Source applications to the MS-Windows platform; a light-weight fork of Cygwin-1.3, it includes a small selection of Unix tools, chosen to facilitate that objective.


<a href="http://www.mingw.org/">MinGW Compiler Download</a>
