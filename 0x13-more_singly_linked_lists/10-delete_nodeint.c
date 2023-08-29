#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a
 * at node at a given position
 * @head: pointer to ponter of listint_t
 * @index: index of the list to add a new node
 * Return: 1 if it succeds or -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *after, *present = *head;
	unsigned int N = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(present);
		return (1);
	}

	while (N < (index - 1))
	{
		if (present == NULL)
			return (-1);
		present = present->next;
		N++;
	}

	after = present->next;
	present->next = after->next;
	free(after);
	return (1);
}
