#include "main.h"

/**
 * swap_int - a functiont that swaps values of it's inputs
 * @a: parameter one
 * @b: parameter two
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
