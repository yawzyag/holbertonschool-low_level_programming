# Dynamic libraries in C

----
## what are dynamic libraries?
see [Wikipedia](https://en.wikipedia.org/wiki/Markdown)

> Libraries are linked in the final step of C program compilation (where a C program is converted to a form the machine can execute). There are two ways libraries can be linked: statically and dynamically, turning them into either a static library, or a dynamic (shared) library respectively.

> static libraries are the first type of library to be provided on UNIX systems. They’re usually faster than shared libraries because a set of commonly used object files is put into a single library executable file. One can build multiple executables without the need to recompile the file. Because it’s a single (static library) file to be built, the link commands are simpler than shared library link commands, as you simply specify the name of the static library (as opposed to listing a long series of object files).

----
##  To create the shared library (Linux only), you can use the following command two command lines:

```
gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o liball.so
```

The -g flag includes debugging information in the compiled program.

The -fPIC flag stands for “Position Independent Code” generation, a requirement for shared libraries. Because it’s impossible to know where the shared library code will be, this flag allows the code to be located at any virtual address at runtime.

The -shared flag creates the shared library (shared libraries have the prefix lib and suffix .so [for shared object].

----
## To use

To use a dynamic library (Linux only):

```
gcc -g -wall -o prog prog.c liball.so
```

----
)