#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string.
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		result += ((b[i] - '0') * len);
		len *= 2;
		i--;
	}


	return (result);
}
