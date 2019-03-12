# MACROS

----
## What are macros in C?
see [Macros](https://www.quora.com/What-are-macros-in-C)

> The #define directive defines an identifier and a character sequence (a set of characters) that will be substituted for the identifier each time it is encountered in the source file. The identifier is referred to as a macro name and the replacement process as macro replacement. The general form of the directive is

Syntax :

* #define macro-name char-sequence

----
## usage example
``` include <stdio.h> .  ```

``` #define LEFT 1```

```#define RIGHT 0```

```int main(){```

```printf("%d %d %d", RIGHT, LEFT, LEFT+1);```

```}```

----
