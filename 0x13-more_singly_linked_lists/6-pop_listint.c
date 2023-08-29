#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the pointer of the linked list listint_t
 * Return: 0 if list is non empty, head nodes data if not
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int NData;

	if (*head == NULL)
		return (0);

	else
	{
		list = *head;
		NData = (*head)->n;
		*head = (*head)->next;

		free(list);
		return (NData);
	}
}
