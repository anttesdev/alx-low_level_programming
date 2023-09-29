#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the bit to be set
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int selectbit = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & (~selectbit);

	return (1);
}
