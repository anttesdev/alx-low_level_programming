#include "main.h"
#include <stdlib.h>


/**
 * _realloc - reallocates a memory block
 * @ptr: old pointer
 * @old_size: previous allocated memory size
 * @new_size: new allocated memory size
 * Return: new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new = malloc(new_size);
	char *old = ptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}



	else if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			new[x] = old[x];
	}

	else if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			new[x] = old[x];
	}



	if (new == NULL)
		return (NULL);


	free(ptr);

	return (new);
}

