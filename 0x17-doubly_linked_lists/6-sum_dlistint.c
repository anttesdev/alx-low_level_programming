#include "lists.h"

/**
 * sum_dlistint - a function that returns the
 * sum of all the data (n) of a dlistint_t linked list
 * @head: the head of the linked list
 * Return: 0 or the sum of the list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int i;
	int sum = 0;

	if (head == NULL)
		return (0);

	for (i = 0; temp != NULL; i++)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

