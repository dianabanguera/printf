# _printf 👉                                                
                                                                   
Function that produces output according to a format.               
                                                                   
<h3> Prototype: int printf(const char *format, ...) </h3>

![Printf](https://lh3.googleusercontent.com/XsCvzDZqEi_jKw864glIaaZsZgc1uoRM21vfxWzWLmlG6Ru7FB0HdPJMrliQZh3PZmndyT2KVbsfOE1SC9RxNd5SajsRqtO4XHLhCrBTd19FaJA_2R1go53Q212AS_xwhC_8sthT7tVs_t7WNwYoUBJqdpClYth_FiZnNYf7WRwgWQ0L31gNozA1JIAEsIWF3nqY1guBRZQZeuAZ0A0nNSsxIaf9DE796Cu1lmk09sDU5AtbqvzGO-Oz1znoJxbvE6e0RO5OzEcvYrU_f3D1lsdZYDGg95uMQ_w9Dmz4EUaii9d3rI61b6IKESF89NeDuBnGMM6QyVJy756kqrf2xBWVQVmpQC9RM4MbGXtzbvXwf8dojp6kU3ezzUTAVHq8KyYxdzPQeDtl8gPkByblW8ov2NC32dzfQAb22fl9zAZCN7PoVZdYpu5slDHUDGjH2TybdYJfP_JBVO4mW7BmaoqRIEAZ8o0NTzvNRPrjpTWiYIDRl3Zb3rQCiIOR9LIdg2yj_iwOqtCWr8lUFl2e-jkSd-N03Pn4Ink1cq_Jk-z4lv6SaWEPE4IKUC8mSq6k78Wcz8bruTPDjnNeahmSlAZytRN4L0fkhRRz21SWhZKzxU9Rhl9kZZnuMk3gjDXDCLsALPxKjP7BRr7Sj7iICyOfz9aLj5wX3jPw8-8n41FKqT3a8w_jil870Xn_sWZotYz8jXHHOE5NO3NE7qEskpRSZuxvPph9ph9AzMVmHyvYizBHKbl5Ie2vrEP3C0gS5lc4WMD_hjbEeKlwesAsHbxGwVnAa_0=w350-h155-no?authuser=0) 


                                                                   
### Description 👇                                           
                                                                   
The printf function (the name comes from “print formatted”) prints a string on the screen using a “format string” that includes the instructions to mix several strings and produce the final string to be printed on the screen.
In this project, we are going to share a customized version of printf, developed from the knowledge acquired in the Holberton School cohort 17.

**Examples**
- ***String*** - _printf("%s\n", 'Diana Banguera && Pablo Agudelo') 
              **Output** Diana Banguera && Pablo Agudelo 
- ***Character*** - _printf("%c\n", 'D') 
              **Output** D
- ***Integer*** - _printf("%i\n", 33) 
              **Output** 33
- ***Double*** - _printf("%d\n", 1988) 
              **Output** 1988
              
___________________________________________________________________________________________________________________              

### Requierments 🧏‍♂️
1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc
***$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c*** 
3. All files should end with a new line
4. Not allowed to use global variables  
5. No more than 5 functions per file
6. The prototypes of all your functions should be included in your header file called main.h
7. Remember you will follow Betty Style

**Autorizhed functions and macros**
- write
- malloc
- free
- va_start
- va_end
- va_copy
- va_arg

___________________________________________________________________________________________________________________

## Mandatory Tasks 📑
- [x] Write a function that produces output according with conversion specifiers ***c***, ***s***, and ***%***.
- [x] Handle conversion specifiers ***d***, ***i***.
- [x] Create a man page for your function.



