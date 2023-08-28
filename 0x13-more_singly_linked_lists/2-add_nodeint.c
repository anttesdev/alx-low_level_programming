#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer of listint_t list
 * @n: integer to be added
 * Return: Null or the memory address of the added element
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	 listint_t *added;

	added = malloc(sizeof(listint_t));

	if (added == NULL)
		return (NULL);

	added->n = n;
	added->next = *head;

	*head = added;

	return (*head);
}

