#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to be changed
 * @index: index of the bit to be set
 * Return: -1 if it fails or 1 if it does
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	if (((*n) != 0) && ((1 << index) != 0))
		*n ^= (1 << index);

	return (1);
}
