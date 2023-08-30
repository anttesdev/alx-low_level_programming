#include "lists.h"

/**
 * find_listint_loop - find a loop on a linked list
 * @head: pointer to first node in listint_t
 * Return: NULL or starting loop node pointer
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *after, *check;

	if (head == NULL)
		return (NULL);

	after = head->next;

	while  (after)
	{
		if (after == after->next)
			return (after);

		check = head;

		while (check != after)
		{
			if (check == after->next)
				return (after->next);

			check = check->next;
		}
		after = after->next;
	}

	return (NULL);
}

