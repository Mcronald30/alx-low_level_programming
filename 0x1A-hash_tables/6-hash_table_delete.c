#include "hash_tables.h"

/**
 * hash_table_delete - Delete hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new_ht, *table;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			new = ht->array[i];
			while (new_ht != NULL)
			{
				table = new_ht->next;
				free(new_ht->key);
				free(new_ht->value);
				free(new_ht);
				new_ht = table;
			}
		}
	}
	free(ht->array);
	free(ht);
}
