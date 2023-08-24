#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list_t that will be printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n;

	for (n = 0; h; n++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d]%s\n", h->len, h->str);

		h = h->next;
	}

	return (n);
}
