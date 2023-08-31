#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to be changed
 * @index: index of the bit to be set
 * Return: -1 if it fails or 1 if it does
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int Ch;

	if (index > 63)
		return (-1);

	Ch = 1 << index;

	*n = (*n | Ch);

	return (1);
}
