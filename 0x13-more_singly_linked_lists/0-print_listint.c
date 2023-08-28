#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: pointer to list_t that will be printed
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);

		h = h->next;
	}

	return (i);
}
