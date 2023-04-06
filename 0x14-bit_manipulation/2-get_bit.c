#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number of inputs.
 * @index: the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > 63)
		return (-1);

	return ((n & mask) > 0);
}
