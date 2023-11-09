#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node
 * at the end of a dlistint_t list
 * @head: pointer to the head of the linked list
 * @n: new node to be added
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *added, *temp;

	added = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (added == NULL)
		return (NULL);

	added->n = n;
	added->next = NULL;

	if (*head == NULL)
	{
		*head = added;
		(*head)->prev = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = added;
		added->prev = temp;
	}

	return (added);
}
