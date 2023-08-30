#include "lists.h"

listint_t *find_listint_loop(listint_t *head);

/**
 * free_listint_safe - function can free lists with a loop
 * @h: pointer to head pointer of the list
 * Return: frred nodes count
 */

size_t free_listint_safe(listint_t **h)
{
	int i = 1;
	size_t nodes = 0;
	listint_t *after, *startloop;

	if (!h || !(*h))
		return (0);
	
	startloop = find_listint_loop(*h);

	while (*h != startloop && i)
	{
		nodes++;
		after = (*h)->next;
		if (*h == startloop && i)
		{
			if (startloop == startloop->next)
			{
				free(*h);
				break;
			}
			nodes++;
			after = after->next;
			free((*h)->next);
			i = 0;
		}
		
		free(*h);
		
		*h = after;
	}
	
	*h = NULL;
	
	return (nodes);
}


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

