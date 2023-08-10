#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range for values in the array
 * @max: maximum range for values in the array
 * Return: pointer to the array or NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int x, y = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (x = min; x <= max; x++)
	{
		arr[y] = x;
		y++;
	}

	return (arr);
}
