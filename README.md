**# _printf**                                                      
                                                                   
Function that produces output according to a format.               
                                                                   
**Prototype: int printf(const char *format, ...)**                     
                                                                   
**## ¿What is printf?**                                            
                                                                   
The printf function (the name comes from “print formatted”) prints a string on the screen using a “format string” that includes the instructions to mix several strings and produce the final string to be printed on the screen.
In this project, we are going to share a customized version of printf, developed from the knowledge acquired in the Holberton School cohort 17.

**Examples**
* ***String*** - _printf("%s\n", 'Diana&Pablo') **Output** Diana&Pablo 
* ***Character*** - _printf("%c\n", 'D') **Output** D
* ***Integer*** - _printf("%i\n", 33) **Output** 33
* ***Double*** - _printf("%d\n", 1988) **Output** 1988

**### Requierments**
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc
***$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c*** 
* All files should end with a new line
* Not allowed to use global variables  
* No more than 5 functions per file
* The prototypes of all your functions should be included in your header file called main.h

**Autorizhed functions and macros**
- write
- malloc
- free
- va_start
- va_end
- va_copy
- va_arg

**##Mandatory Tasks**
[ ] Write a function that produces output according with conversion specifiers ***c***, ***s***, and ***%***.
[ ] Handle conversion specifiers ***d***, ***i***.
[ ] Create a man page for your function.



