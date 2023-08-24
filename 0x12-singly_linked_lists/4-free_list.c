#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list
 * @head: pointer to list to be freed
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *list;

	while (head != NULL)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}
