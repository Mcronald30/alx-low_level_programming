#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if an error occurred.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	/* Allocate memory for the array */
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->size = size;
	return (ht);
}


/**
 * shash_table_set - sort hash table to add elements
 * @ht: A pointer to the hash table.
 * @key: The key
 * @value: The value associated with the key
 * Return: 1 successful or 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_ht, *copy;
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
	new_ht = malloc(sizeof(shash_node_t));
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


/**
 * shash_table_get - Retrieves a value associated
 * with a key in the hash table
 * @ht: The hash table
 * @key: The hash key
 * Return: The value associated with the key,
 * or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *new_ht;
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


/**
 * shash_table_print - Prints the contents of a hash table
 * @ht: The hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *new_ht;
	unsigned long int i;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		new_ht = ht->array[i];
		while (new_ht != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", new_ht->key, new_ht->value);
			first = 0;
			new_ht = new_ht->next;
		}
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: The hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i = 0, count = 0;
	shash_node_t *new_ht = NULL;

	if (!ht)
		return;

	new_ht = ht->stail;
	while (new_ht != NULL)
	{
		i++;
		new_ht = new_ht->sprev;
	}

	printf("{");
	new_ht = ht->stail;
	while (new_ht != NULL)
	{
		count++;
		printf("'%s': '%s'", new_ht->key, new_ht->value);
		if (count != i)
			printf(", ");
		new_ht = new_ht->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete - Delete hash table
 * @ht: The hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *new_ht, *prev = NULL;

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
