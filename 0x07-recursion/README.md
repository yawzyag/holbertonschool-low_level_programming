# Recursion in c

----
## what is recursion?
see [Recursion](https://www.geeksforgeeks.org/recursion/)

> When a function calls itself directly or indirectly is called recursion and the corresponding function is called as recursive function, In recursive program, the solution to base case is provided and solution of bigger problem is expressed in terms of smaller problems.

----
## usage
```
 int fact(int n)
{
     if (n < = 1) // base case
         return 1;
     else
        return n*fact(n-1);
}
 ```

----
## How a particular problem is solved using recursion?
# headers

* The idea is represent a problem in terms of one or more smaller problems, and add one or more base conditions that stop recursion. For example, we compute factorial n if we know factorial of (n-1). Base case for factorial would be n = 0. We return 1 when n = 0. *