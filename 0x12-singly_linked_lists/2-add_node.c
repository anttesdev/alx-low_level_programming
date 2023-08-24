#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer of list_t list
 * @str: string to be added
 * Return: Null or the memory address of the added element
 */

list_t *add_node(list_t **head, const char *str)
{
	 list_t *added;
	 int i;
	 char *s;

	for (i = 0; str[i];)
		i++;

	added = malloc(sizeof(list_t));

	if (added == NULL)
		return (NULL);

	s = strdup(str);

	added->str = s;
	added->len = i;
	added->next = *head;

	*head = added;

	return (*head);
}

