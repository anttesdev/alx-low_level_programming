#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL if an error occurs.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *Table = NULL;
	unsigned long int i;

	Table = malloc(sizeof(hash_table_t));
	if (Table == NULL)
		return (NULL);
	Table->array = malloc(sizeof(hash_node_t *) * size);
	if (Table->array == NULL)
	{
		free(Table);
		return (NULL);
	}
	Table->size = size;
	for (i = 0; i < size; i++)
		Table->array[i] = NULL;
	return (Table);
}

