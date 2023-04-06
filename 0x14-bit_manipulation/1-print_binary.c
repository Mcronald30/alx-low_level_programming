#include "main.h"
#include <unistd.h>
#include <limits.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: number of integers.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int printbin = 1ul << 63;
	char c = '0';

	while (!(printbin & n) && printbin != 0)
		printbin = printbin >> 1;

	if (printbin == 0)
		write(1, &c, 1);

	while (printbin)
	{
		if (printbin & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		printbin = printbin >> 1;
	}
}
