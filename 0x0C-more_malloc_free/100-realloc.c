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
	char *new;
	char *old;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	new = malloc(new_size);

	old = ptr;

	if (new == NULL)
		return (NULL);

	
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

	free(ptr);

	return (new);
}

