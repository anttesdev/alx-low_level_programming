#include "main.h"

/**
 * print_last_digit - prints out the last digit of a number
 * @x: integer parameter
 * Return: y (last digit)
 */

int print_last_digit(int x)
{
	int y = x % 10;

	if (y < 0)
	{
		y = -y;
	}
	_putchar(y + '0');

	return (y);
}
