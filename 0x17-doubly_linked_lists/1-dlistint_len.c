#include "lists.h"

/**
 * dlistint_len- a function returns the number of elements in a linked list
 * @h: pointer to list to be checked
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
