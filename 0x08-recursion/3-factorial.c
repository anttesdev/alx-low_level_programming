#include "main.h"

/**
 * factorial - a function that returns the factorial of a number
 * @n: integer argument
 * Return: -1 if n < 0, 1 if n == 0; factoral n if n > 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
