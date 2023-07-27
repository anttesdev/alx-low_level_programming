#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: pointer input
 * @n: number of integers in the array
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}

