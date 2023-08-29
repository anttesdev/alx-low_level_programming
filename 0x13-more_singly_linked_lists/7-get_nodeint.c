#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of a listint_t
 * @head: pointer to listint_t first node
 * @index: index of the node
 * Return: NULL if it doesnt exist or index of node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (n < index)
	{
		if (head == NULL)
			return (NULL);

		else
			head  = head->next;

		n++;
	}

	return (head);
}
