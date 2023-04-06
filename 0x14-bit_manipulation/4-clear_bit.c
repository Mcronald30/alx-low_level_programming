#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: a pointer to an integer.
 * @index: index of the bit we want to set.
 * Return: 1 success or -1 when failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || index >= sizeof(int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
