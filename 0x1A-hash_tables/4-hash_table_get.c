#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated
 * with a key in the hash table
 * @ht: The hash table
 * @key: The hash key
 * Return: The value associated with the key,
 * or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_ht;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	new_ht = ht->array[index];

	while (new_ht != NULL)
	{
		if (strcmp(new_ht->key, key) == 0)
			return (new_ht->value);
		new_ht = new_ht->next;
	}

	return (NULL);
}
