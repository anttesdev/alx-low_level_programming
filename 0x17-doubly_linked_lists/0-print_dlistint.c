#include "lists.h"

/**
 * print_dlistint - a function that prints a doubly linked list
 * @h: pointer to list to be printed
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
