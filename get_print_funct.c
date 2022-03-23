#include "main.h"

/**
 * specifiers - select the coorect format
 *
 *
 */
int (*specifiers(const char *format))(va_list)
{
	print_p m[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{"%", print_percent},
		{NULL, NULL},
	};

	int i = 0;

	for (; m[i].p != NULL; i++)
	{
		if (*(m[i].p) == *format)
		{
			break;
		}
	}
	return (m[i].f);
}
