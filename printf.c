#include "main.h"
/**
 * _printf - prints anything according to a format
 * @format: format selec
 * Return: numbers of characters
 */
int _printf(const char *format, ...)
{
	int index = 0, contador = 0, a;
	va_list object;
	int (*funciones)(va_list);

	va_start(object, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[index])
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
			contador++;
		}
		else if (format[index] == '%' && format[index + 1] == '%')
		{
			_putchar('%');
			contador++;
			index++;
		}
		else if (format[index] == '%')
		{
			funciones = specifiers(&format[index + 1]);
			a = (funciones) ? funciones(object) : _printf("%%%c", format[index + 1]);
			contador += a;
			index++;
		}
		index++;
	}
	va_end(object);
	return (contador);
}
