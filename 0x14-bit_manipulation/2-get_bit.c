#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index.
 * @n: the bit to be searched
 * @index: the index of the bit
 * Return: -1 if error else the value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int selectbit = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & selectbit) == 0)
		return (0);

	return (1);
}
