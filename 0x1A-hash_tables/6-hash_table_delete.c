#include "hash_tables.h"

/**
 * hash_table_delete - Delete hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new_ht, *table;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		new_ht = ht->array[i];
		while (new_ht != NULL)
		{
			table = new_ht;
			new_ht = new_ht->next;
			free(table->key);
			free(table->value);
			free(table);
		}
	}
	free(ht->array);
	free(ht);
}
