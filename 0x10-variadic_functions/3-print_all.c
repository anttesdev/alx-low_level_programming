#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: format specifier for arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separator = "";

	va_list all;

	va_start(all, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%i", separator, va_arg(all, int));
					break;
				case 'c':
					printf("%s%c", separator, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(all, double));
					break;
				case 's':
					s = va_arg(all, char*);
					if (s == NULL)
						s = "(nil)";

					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(all);
}
