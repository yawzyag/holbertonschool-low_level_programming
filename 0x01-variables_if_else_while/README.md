# C programming
----
## Variables, if, else, while
see [Dennis MacAlistair](https://en.wikipedia.org/wiki/Dennis_Ritchie)

> Dennis MacAlistair Ritchie created the C programming language and, with long-time colleague Ken Thompson, the Unix operating system.

----
## Type of Variables in C
* Integers - whole numbers which can be either positive or negative. Defined using char, int, short, long or long long.
* Unsigned integers - whole numbers which can only be positive.  Defined using unsigned char, unsigned int, unsigned short, unsigned long or unsigned long long.
* Floating point numbers - real numbers (numbers with fractions). Defined using float and double.


----
## Holberton Betty linter
[link to betty repo](https://github.com/holbertonschool/Betty)

* Go to the Betty repository
* Clone the repo to your local machine
* cd into the Betty directory
* Install the linter with sudo ./install.sh

----
## If, else, while

* >     greater than              5 > 4 is TRUE
* <     less than                 4 < 5 is TRUE
* >=    greater than or equal     4 >= 4 is TRUE
* <=    less than or equal        3 <= 4 is TRUE
* ==    equal to                  5 == 5 is TRUE
* !=    not equal to              5 != 4 is TRUE

> if ( statement is TRUE )   
    {Execute this line of code}

> if ( TRUE ) {   
    /* Execute these statements if TRUE */
}  
else {  
    /* Execute these statements if FALSE */  
}

>while(condition) {  
   statement(s);  
}