#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to list to be freed
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	if (!head)
		return;

	while (*head != NULL)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}
	*head = NULL;
}
