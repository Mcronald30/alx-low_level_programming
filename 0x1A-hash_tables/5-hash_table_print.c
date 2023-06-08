#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_ht;

	if (ht == NULL)
		return;

	new_ht = ht->shead;
	printf("{");
	while (new_ht != NULL)
	{
		printf("'%s': '%s'", new_ht->key, new_ht->value);
		new_ht = new_ht->snext;
		if (new_ht != NULL)
			printf(", ");
	}
	printf("}\n");
}
