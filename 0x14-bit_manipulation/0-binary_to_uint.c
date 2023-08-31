#include "main.h"

/**
 * binary_to_uint - converts a binary number to a positive decimal number
 * @b: string that stores the binary number in 0 and 1
 * Return: number or 0 if it is NUll or not made up of 0 and 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		decimal <<= 1;

		if (b[i] == '1')
			decimal += 1;
	}
	return (decimal);
}
