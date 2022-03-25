#include "main.h"
/**
 * count - cuenta tamaño 
 * @number: number
 * Return: degits of number
 *
 */
int count(int number)
{
	unsigned int num = 0, cont;

	if (number < 0)
		cont = number * -1;
	else
		cont = number;
	while (cont != 0)
	{
		cont /= 10;
		num++;
	}
	return (num);
}
/**
 * print_num - print number
 * @num: number to print
 */
void print_number(int num)
{
	unsigned int comparator;

	if (num < 0)
	{
		_putchar('-');
		comparator = -num;
	}
	else
		comparator = num;

	if (comparator / 10)
		print_number(comparator / 10);

	_putchar((comparator % 10) + '0');
}

/**
 *
 */
int print_int(va_list id)
{
       int num = va_arg(id, int);
       int cont = count(num);

       if (num <= 0)
	       cont++;
       print_number(num);
       return (cont);
}
