#include "main.h"

/**
 * print_line - prints out a line
 * @n: integer argument for line
 * Return: void
 */

void print_line(int n)
{
	int i;


	if (n > 0)
	{
	for (i = 1; i <= n ; i++)
		{
		_putchar('_');
		}
	}

		_putchar('\n');
}
