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
		int i;

		for (i = 1; i < n; i++)
		{
			_putchar(' ');
		}

		_putchar('\\');
	}

	_putchar('\n');
}

