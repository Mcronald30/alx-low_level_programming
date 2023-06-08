#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: A pointer to the hash table.
 * @key: The key
 * @value: The value associated with the key
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_ht, *copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	copy = ht->array[index];
	while (copy != NULL)
	{
		if (strcmp(copy->key, key) == 0)
		{
			free(copy->value);
			copy->value = strdup(value);
			if (copy->value == NULL)
				return (0);
			return (1);
		}
		copy = copy->next;
	}
	new_ht = malloc(sizeof(hash_node_t));
	if (new_ht == NULL)
		return (0);

	new_ht->key = strdup(key);
	new_ht->value = strdup(value);
	if (new_ht->key == NULL || new_ht->value == NULL)
	{
		free(new_ht->key);
		free(new_ht->value);
		free(new_ht);
		return (0);
	}

	new_ht->next = ht->array[index];
	ht->array[index] = new_ht;

	return (1);
}
