#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to list_t list
 * Return: the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t n;

	for (n = 0; h; n++)
		h = h->next;

	return (n);
}
