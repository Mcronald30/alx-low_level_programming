#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if an error occurred.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;
	unsigned long int i;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);

	/* Allocate memory for the array */
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		new_hash->array[i] = NULL;

	new_hash->size = size;
	return (new_hash);
}
