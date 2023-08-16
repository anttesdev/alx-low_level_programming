#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns the index of the first element that it an integer
 * @array: array to be searched
 * @size: size of the array
 * @cmp: function pointer to compare elements of array
 * Return: (-1) if size <= 0 or no element found, index of element if found
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (index < size)
	{
		if (cmp(array[index]))
				return (index);

		index++;
	}

	return (-1);
}
