#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to list_t
 * @str: string to be added
 * Return: added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	char *s;
	list_t *added;
	list_t *rear;

	for (i = 0; str[i];)
		i++;

	added = malloc(sizeof(list_t));

	if (added == NULL)
		return (NULL);

	s = strdup(str);

	added->str = s;
	added->len = i;
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







