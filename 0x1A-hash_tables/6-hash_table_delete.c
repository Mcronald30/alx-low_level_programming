#include "hash_tables.h"

/**
 * hash_table_delete - Delete hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *new_ht, *prev = NULL;

	if (!ht)
		return;

	for (; i < ht->size; i++)
	{
		new_ht = ht->array[i];
		while (new_ht != NULL)
		{
			free(new_ht->key);
			free(new_ht->value);
			prev = new_ht;
			new_ht = new_ht->next;
			free(prev);
		}
		free(new_ht);
	}
	free(ht->array);
	free(ht);
}
