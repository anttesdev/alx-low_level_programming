#include "lists.h"

/**
 * sum_listint - function returns the nth node of a listint_t
 * @head: pointer to listint_t first node
 * Return: 0 if list is empty or sum of data in nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;

	}

	return (sum);
}
