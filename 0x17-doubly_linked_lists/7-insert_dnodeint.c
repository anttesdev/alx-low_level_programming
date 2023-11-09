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
	dlistint_t *added, *temp;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	added = (dlistint_t *)malloc(sizeof(dlistint_t));
	added->n = n;
	added->next = temp->next;
	added->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = added;
	temp->next = added;
	return (added);
}


