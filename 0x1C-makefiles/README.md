# C - Makefiles

![make file](https://www.codeproject.com/KB/cpp/makefiles_linux/lnxmk_01.jpg)
reference(https://www.codeproject.com/Articles/31488/Makefiles-in-Linux-An-Overview#T1)


 The make command is used not only to help a developer compile applications, it can be used whenever you want to produce output files from several input files.

# Syntax

make requires a makefile that tells it how your application should be built. The makefile often resides in the same directory as other source files and it can have any name you want. For instance, if your makefile is called run.mk then to execute make command type:

    make -f holberton

## Syntax of Makefiles

A make file consists of a set of targets, dependencies and rules. A target most of time is a file to be created/updated. target depends upon a set of source files or even others targets described in Dependency List. Rules are the necessary commands to create the target file by using Dependency List.

As you see in figure 1 each command in the Rules part must be on lines that start with a TAB character. Space issue errors. Also, a space at end of the rule line may cause make issues an error message.

The makefile is read by make command which determines target files to be built by comparing the dates and times (timestamp) of source files in Dependency List. If any dependency has a changed timestamp since the last build make command will execute the rule associated with the target.

-----
