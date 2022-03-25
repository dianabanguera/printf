#include "main.h"

/**
 * specifiers - select the coorect format
 * @format: format to will selec
 * Return: selected format
 */
int (*specifiers(const char *format))(va_list)
{
	print_p m[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};

	int i = 0;

	for (; m[i].p != NULL; i++)
	{
		if (*(m[i].p) == *format)
		{
			return (m[i].f);
		}
	}
	return (NULL);
}
