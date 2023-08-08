#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: column for 2 dimensional array
 * @height: row for 2 dimensional array
 * Return: pointer to the 2-d array
 */

int **alloc_grid(int width, int height)
{
	int **new_array;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	new_array = malloc((sizeof(int *) * height));

	if (new_array == NULL)
	{
		free(new_array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		new_array[i] = malloc(sizeof(int) * width);

		if (new_array[i] == NULL)
		{
			while (i >= 0)
			{
				free(new_array[i]);
				i--;
			}
				free(new_array);
				return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			new_array[i][j] = 0;
		}
	}
	return (new_array);
}

