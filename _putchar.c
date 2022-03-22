#include <unistd.h>
/**
 * _putchar - writes char to stdout
 * @c: char to print
 * Return: 1 succes, -1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
