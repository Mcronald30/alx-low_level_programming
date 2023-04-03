#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: points to the head of the list.
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
