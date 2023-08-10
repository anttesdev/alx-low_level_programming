#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members of array
 * @size: size of the array
 * Return: pointer to the array or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	int x, y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = nmemb * size;
	arr = malloc(x);

	if (arr == NULL)
		return (NULL);
	for (y = 0; y < x; y++)
		arr[y] = 0;

	return (arr);
}

