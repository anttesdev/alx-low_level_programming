#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of possible arguments
 * Return: 0 or sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list list;

	if (n == 0)
		return (0);
	
	va_start(list, n);

	while (i < n)
	{
		sum = sum + va_arg(list, int);
		i++;
	}

	va_end(list);
	return (sum);
}



