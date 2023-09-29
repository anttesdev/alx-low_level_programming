#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number to be flipped
 * @m: Outcome after flipping
 * Return: new number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int bit_count = 0;

	while (result)
	{
		bit_count += result & 1;
		result >>= 1;
	}

	return (bit_count);
}
