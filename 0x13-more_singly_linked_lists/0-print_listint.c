#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to listint_t that will be printed
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h;)
	{
		printf("%d\n", h->n);
		i++;

		h = h->next;
	}

	return (i);
}
