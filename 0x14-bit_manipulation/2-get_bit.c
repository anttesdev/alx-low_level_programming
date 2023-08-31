#include "main.h"

/**
 * get_bit - a function that  returns the value
 * of a bit at a given index
 * @n: unsigned long integer as an input
 * @index: the index that you want to try and get value of
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	else
		return ((n >> index) & 1);
}
