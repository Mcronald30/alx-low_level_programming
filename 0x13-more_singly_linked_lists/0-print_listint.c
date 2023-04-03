#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: point to the head of the lists.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;

	while (current != Null)
	{
		printf("%d", current->n);
		current = current->next;
	}
	printf("\n");
	return (cont);
}
