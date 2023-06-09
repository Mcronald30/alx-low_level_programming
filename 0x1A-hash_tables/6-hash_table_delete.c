#include "hash_tables.h"

/**
 * hash_table_delete - Delete hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
	{
		return;
	}

	for (unsigned long int i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			hash_node_t *next = node->next;

			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}
	free(ht->array);
	free(ht);

}
