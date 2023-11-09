#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position
 * @h: the head of the linked list
 * @idx: the index to insert the new node at
 * @n: the new node
 * Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t **head = h;
	dlistint_t *added, *temp = *head;
	unsigned int i;

	added = (dlistint_t *)malloc(sizeof(dlistint_t));
	added->n = n;
	added->prev = NULL;
	added->next = NULL;

	if (added == NULL)
		return (NULL);
	if (idx == 0)
	{
		added->next = *h;
		if (*h != NULL)
			(*h)->prev = added;
		*h = added;
		return (added);
	}
	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;
	if (temp == NULL)
	{
		free(added);
		return (NULL);
	}
	added->next = temp->next;
	added->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = added;
	temp->next = added;
	return (added);
}


