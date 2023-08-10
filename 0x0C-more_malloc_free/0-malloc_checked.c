#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: number of bytes it allocates
 * Return: Pointer to allocated memory or exits
 */


void *malloc_checked(unsigned int b)
{
	void *mal = malloc(b);

	if (mal == NULL)
		exit(98);

	else
		return (mal);
}
