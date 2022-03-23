#include "main.h"
/**
 * _printf - prints anything according to a format
 * @format: format selec
 * Return: numbers of characters
 */
int _printf(const char *format, ...)
{
	int index = 0, contador = 0;
	va_list object;
	int (*funciones)(va_list);

	va_start(object, format);
	while (format[index])
	{
		if (format[index] == '%' && format[index + 1] == '%')
		{
			_putchar('%');
			contador++;
			index += 2;
			continue;
		}
		else if (format[index] == '%')
		{
			funciones = specifiers(&format[index + 1]);
			if (funciones != NULL)
			{
				contador += funciones(object);
				index += 2;
				continue;
			}
			else
			{
				if (format[index] == '%' && format[index + 1] == '\0')
				{
					contador++;
					_putchar(format[index]);
				}
			}
		}
		else if (format[index] != '\0')
		{
			_putchar(format[index]);
			contador++;
		}
		index++;
	}
	va_end(object);
	return (contador);
}
