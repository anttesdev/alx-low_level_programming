#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - executes a function on an array
 * @array: array to be iterated
 * @size: size of the array
 * @action: function pointer to be passed
 * Return: void
 */

void array_iterator(int *array, int size, void (*action)(int))
{
	int x = 0;

	if (array == NULL || action == NULL)
		return;

	while (x < size)
	{
		action(array[x]);
		x++;
	}
}

