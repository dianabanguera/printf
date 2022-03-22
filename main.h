#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - This structure, prints diferent types
 * @p: type to print
 * @m: function to print
 */
typedef struct print
{
	char *p;
	int (*m)(va_list);
} print_p;

int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);

#endif
