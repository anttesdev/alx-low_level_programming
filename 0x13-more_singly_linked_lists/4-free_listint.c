#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: pointer to list to be freed
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
