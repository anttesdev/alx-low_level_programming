#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		int y;

	for (y = 0; y < 15; y++)
		{
		if (y > 9)
			{
			_putchar(49);
			}

		_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
