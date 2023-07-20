#include "main.h"

/**
 * print_diagonal - print diagonal at a specified position
 * @n: the integer argument for position
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0 ; j < i; j++)
			{
			_putchar(' ');
			}
			_putchar('\\');

			_putchar('\n');
		}

	}

}

