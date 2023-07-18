#include "main.h"
/**
 * times_table - 0 to 9 multiplication table
 * Return: (0) success
 *
 */

void times_table(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		int y;

		for (y = 0; y < 10; y++)

		{
			int z = x * y;

			if (z >= 10)
			{
			_putchar(',');
			_putchar(' ');
			_putchar((z / 10) + '0');
			_putchar((z % 10) + '0');
			}

			else if (z < 10 && y != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(z + '0');
			}

			else if (y == 0)
			{
			_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
