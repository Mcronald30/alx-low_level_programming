#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: point to the head of the lists.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t cont = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		cont++;
		current = current->next;
	}
	return (cont);
}
