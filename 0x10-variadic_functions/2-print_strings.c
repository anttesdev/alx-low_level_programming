#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string arguments
 * @separator: string pointer separator
 * @n: number of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list strings;
	char *s;

	va_start(strings, n);


	while (i < n)
	{
		s = va_arg(strings, char*);

		if (s == NULL)
			printf("(nil)");

		printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

		i++;
	}

	printf("\n");

	va_end(strings);
}
