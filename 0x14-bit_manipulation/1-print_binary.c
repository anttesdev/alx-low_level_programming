#include "main.h"

/**
 * print_binary - prints the binary number from a decimal number
 * @n: the number to be printed in binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if ((n >> 0) != 0)
	{
		if ((n >> 1) != 0)
			print_binary(n >> 1);

		_putchar((n & 1) + '0');
	}
	else
		_putchar('0');
}

