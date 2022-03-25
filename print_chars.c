#include "main.h"

/**
 * print_c - print a character
 * @c: character
 * Return: always 1
 */
int print_c(va_list c)
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

/**
 * print_s - function that print a string
 * @s: string to print
 * Return: size of string
 */
int print_s(va_list s)
{
	int counter = 0;
	int i = 0;
	int tmp = 0;
	char *strg = va_arg(s, char *);

	if (!strg)
		strg = "(null)";
	for (i = 0; strg[i]; i++)
	{
		tmp = write(1, &strg[i], 1);
		counter += tmp;
	}
	return (counter);
}
