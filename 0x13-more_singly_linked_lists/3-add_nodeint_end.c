#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to a pointer to listint_t
 * @n: integer to be added at the end
 * Return: added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added;
	listint_t *rear;


	added = malloc(sizeof(listint_t));

	if (added == NULL)
		return (NULL);


	added->n = n;
	added->next = NULL;

	if (*head == NULL)
	{
		*head = added;
		return (added);
	}
	else
	{
		rear = *head;
		while (rear->next)
			rear = rear->next;
	}

	rear->next = added;

	return (added);
}


