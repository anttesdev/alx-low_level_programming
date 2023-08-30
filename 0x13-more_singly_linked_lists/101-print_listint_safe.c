#include "lists.h"

/**
 * check_for_loop - find a loop on a linked list
 * @head: pointer to first node in listint_t
 * Return: NULL or starting loop node pointer
 */

listint_t *check_for_loop(listint_t *head)
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

/**
 * print_listint_safe - prints a linked list whether there is a loop or not
 * @head: head pointer to list to be printed
 * Return: count of nodes printed
 */

size_t print_listint_safe(const listint_t *head)
{
	int i = 1;
	size_t nodes = 0;
	listint_t *startloop;

	startloop = check_for_loop((listint_t *) head);


	while ((head != startloop || i) && head)
	{
		printf("[%p] %d\n", (void *) head, head->n);

		if (head == startloop)
			i = 0;
		head = head->next;
		nodes++;
	}

	if (startloop)
		printf("-> [%p] %d\n", (void *) head, head->n);

	return (nodes);
}





