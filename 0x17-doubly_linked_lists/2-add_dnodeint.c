#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at
 * the beginning of a dlistint_t list
 * @head: pointer to the address of the head
 * @n: nodde to be added
 * Return: address of the new element, or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added;

	added = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (added == NULL)
		return (NULL);

	added->n = n;

	added->next = *head;
	added->prev = NULL;

	if (*head != NULL)
		(*head)->prev = added;

	*head = added;

	return (added);
}




