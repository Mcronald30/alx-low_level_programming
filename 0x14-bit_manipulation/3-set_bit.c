#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number of inputs.
 * @index: index, starting from 0 of the bit you want to set.
 * Return: 1 success or -1 when failed.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || index >= sizeof(int) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
