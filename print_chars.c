#include "main.h"

/**
 * print_c - print a character
 * @c: character
 * Return: always 1
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
/**
 * print_string - function print a string
 * @s: string to print
 * Return: size of string
 */
int print_string(va_list s)
{
	int i = 0;
	char *str = va_arg(s, char *);

	for (; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	return (strlen(str));
}
