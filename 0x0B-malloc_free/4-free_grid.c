#include "main.h"
#include <stdlib.h>


/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: 2 dimensional grid to be freed
 * @height: number of rows of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
