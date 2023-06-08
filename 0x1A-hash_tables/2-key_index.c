#include "hash_tables.h"

/**
 * key_index - function to calculate the index for a given key
 * @key: hash value for the key
 * @size: size of the array
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
