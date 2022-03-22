#include "main.h"

/**
 *
 *
 *
 */
int print_c(va_list c);
{
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
}

/**
 * _strlen_recursion - prints the length of a string
 * @s: string to be check
 * Return: length 
 */
int _strlen_recursion(char *s)
{
	if (!s || !*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
