#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct print - This structure, prints diferent types
 * @p: type to print
 * @f: function to print
 */
typedef struct print
{
	char *p;
	int (*f)(va_list);
} print_p;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_num(va_list num);
int count(int number);
int print_int(va_list id);
int print_percent(va_list p);
int (*specifiers(const char *format))(va_list);
int _strlen_recursion(char *s);

#endif
