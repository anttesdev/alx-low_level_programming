#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number to be changed
 * @m: target number
 * Return: the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int Ch_bit = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			Ch_bit++;

		n >>= 1;
		m >>= 1;
	}

	return (Ch_bit);
}
