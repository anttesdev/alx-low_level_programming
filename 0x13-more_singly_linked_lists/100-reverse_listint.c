#include "lists.h"

/**
 * reverse_listint - returns a pointer to the
 * first node of the reversed list
 * @head: pointer to ponter of listint_t
 * Return: NULL or pointer to first node of reverse
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *past = NULL, *future;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head)
	{
		future = (*head)->next;
		(*head)->next = past;
		past = (*head);
		(*head) = future;
	}

	*head = past;
	return (*head);
}
