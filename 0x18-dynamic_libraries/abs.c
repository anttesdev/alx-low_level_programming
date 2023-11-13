#include "main.h"

/**
 * _abs - returns absolute value of an integer
 * @n: integer parameter
 * Return: positive integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}

	return (0);
}
