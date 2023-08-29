#include "lists.h"

/**
 * insert_nodeint_at_index - function returns that inserts a
 * new node at a given position
 * @head: pointer to ponter of listint_t
 * @idx: index of the list to add a new node
 * @n: the new integer to be added
 * Return: NULL or the adress of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *added, *list = *head;
	unsigned int N = 0;

	added = malloc(sizeof(listint_t));

	if (added == NULL)
		return (NULL);

	added->n = n;

	if (idx  == 0)
	{
		added->next = list;
		*head = added;

		return (added);
	}

	while (N < (idx - 1))
	{
		if (list == NULL || list->next == NULL)
			return (NULL);

		list = list->next;
		N++;
	}

	added->next = list->next;
	list->next = added;

	return (added);
}
