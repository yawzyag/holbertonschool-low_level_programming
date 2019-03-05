# Static Libraries in C

----
## what is library?
see [Libraries](https://www.geeksforgeeks.org/static-vs-dynamic-libraries/)

> When a C program is compiled, the compiler generates object code. After generating the object code, the compiler also invokes linker. One of the main tasks for linker is to make code of library functions (eg printf(), scanf(), sqrt(), ..etc) available to your program. so this library is a collection of items that you can call from your program. 

> Examples of static libraries (libraries which are statically linked) are, .a files in Linux and .lib files in Windows.

----
## usage
 Create Static library (from .o files) 

``` ar -rc libholbertonschool.a *.o ```
``` ranlib libholbertonschool.a ```

* (Use 'ranlib' to re-generate the index.)

``` gcc main.c -L. -lholbertonschool -o alpha ```