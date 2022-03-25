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
int print_int(va_list id);
void print_number(int num);
int count(int number);
int print_i(va_list i);
int print_d(va_list d);
int percent(va_list object);
int (*specifiers(const char *format))(va_list);
int _strlen_recursion(char *s);

#endif
