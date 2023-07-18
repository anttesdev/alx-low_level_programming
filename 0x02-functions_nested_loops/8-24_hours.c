#include "main.h"

/**
 * jack_bauer - prints out every minute of every hour
 * Return: 0 sucess
 */

void jack_bauer(void)
{
	int x;

	for (x = 0; x < 24; x++)
	{
		int y;

		for (y = 0; y < 60 ; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
	}
}

