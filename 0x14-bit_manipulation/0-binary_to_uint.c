#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int
 * @b: binary number input
 * Return: 0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if  (b[i] != '0' && b[i] != 1)
			return (0);

		decimal = decimal << 1;

		if (b[i] == '1')
			decimal = decimal + 1;
	}
	return (decimal);
}

