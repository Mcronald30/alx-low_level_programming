#include <stdio.h>
#include <stdlib.h>

/**
 * is_palindrome - is a helper function that checks
 * whether a given number n is a palindrome or not
 * @n: integer of the pointer
 * Return: null
 */
int is_palindrome(int n)
{
	int original = n;
	int reversed = 0;

	while (n > 0)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	return (original == reversed);
}

/**
 * main - main function
 *
 *
 * Return: void
 */
int main()
{
	int largest_palindrome = 0;

	for (int i = 999; i >= 100; i--)
	{
		for (int j = i; j >= 100; j--)
		{
			int product = i * j;
			if (product > largest_palindrome && is_palindrome(product))
			{
				largest_palindrome = product;
			}
		}
	}

	FILE *file = fopen("102-result", "w");
	if (file == NULL)
	{
		printf("Error opening file.\n");
		return (1);
	}

	fprintf(file, "%d", largest_palindrome);
	fclose(file);
	return (0);
}
