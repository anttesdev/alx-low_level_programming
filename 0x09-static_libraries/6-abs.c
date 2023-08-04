#include "main.h"

/**
 * _abs - returns absolute value of an integer
 * @x: integer parameter
 * Return: positive integer
 */

int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (-x);
	}

	return (0);
}
