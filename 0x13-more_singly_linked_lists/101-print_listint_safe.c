#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: A pointer to the head node of the list.
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t cont = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		cont++;
	}

	return (cont);
}
