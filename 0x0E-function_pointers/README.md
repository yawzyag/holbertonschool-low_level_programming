# Function Pointers

----
## What are Function pointers in C?
see [Function Pointer](https://cs.nyu.edu/courses/spring12/CSCI-GA.3033-014/Assignment1/function_pointers.html)

> Just as a variable can be declared to be a pointer to an int, a variable can also declared to be a pointer to a function (or procedure). For example, the following declares a variable v whose type is a pointer to a function that takes an int as a parameter and returns an int as a result:

----
## usage example

```
int (*v)(int);
```

That is, v is not itself a function, but rather is a variable that can point to a function.
Since v does not yet actually point to anything, it needs to be assigned a value (i.e. the address of a function). Suppose you have already defined the following function f, as follows.

```
int f(int x) {
  return x+1;
}
```

To make v point to the function f, you simply need to assign v as follows:

```
  v = f;
```
