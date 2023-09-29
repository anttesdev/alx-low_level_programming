#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int position = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int set = 0;
	
	while (position > 0)
	{
		if (n & position)
		{
			_putchar('1');
			set = 1;
		}
		else if (set)
		{
			_putchar('0');
		}
		
		position >>= 1;
	}
	if (!set)
		_putchar('0');
}
