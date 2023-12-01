#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}

/**
 * shash_table_set - Adds or updates an element in the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to be added or updated.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (tmp = ht->array[index]; tmp; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);

			if (tmp->value == NULL)
				return (0);
			if (tmp->sprev != NULL && strcmp(tmp->sprev->key, key) > 0)
			{
				tmp->sprev->snext = tmp->snext;
				if (tmp->snext != NULL)
					tmp->snext->sprev = tmp->sprev;
				tmp->sprev = NULL;
				tmp->snext = ht->shead;
				ht->shead->sprev = tmp;
				ht->shead = tmp;
			}
			else if (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			{
				tmp->snext->sprev = tmp->sprev;
				if (tmp->sprev != NULL)
					tmp->sprev->snext = tmp->snext;
				tmp->sprev = tmp->snext;
				tmp->snext = tmp->snext->snext;
				if (tmp->snext != NULL)
					tmp->snext->sprev = tmp;
				if (tmp->sprev == NULL)
					ht->shead = tmp;
			}
			return (1);
		}
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new_node->sprev = tmp;
		new_node->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new_node;
		else
			tmp->snext->sprev = new_node;
		tmp->snext = new_node;
	}
	return (1);
}
/**
 * shash_table_get - Retrieves the value
 * associated with a key in the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key for which to retrieve the value.
 *
 * Return: The value associated with the key,
 * or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL && strcmp(temp->key, key) < 0)
		temp = temp->next;

	if (temp != NULL && strcmp(temp->key, key) == 0)
		return (temp->value);
	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table using the sorted linked list.
 * @ht: The sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;
	temp = ht->shead;
	printf("{");
	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
		if (temp != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table
 * in reverse order using the sorted linked list.
 * @ht: The sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;
	temp = ht->stail;
	printf("{");
	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
		if (temp != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
