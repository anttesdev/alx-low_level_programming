#include "main.h"

/**
 * _pow_recursion - returns x to the power of y
 * @x: integer argument
 * @y: power integer argument
 * Return: (-1) if y < 0, (1) if y = 0; x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if  (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

