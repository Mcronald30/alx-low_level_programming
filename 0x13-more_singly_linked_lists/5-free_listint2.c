#include "lists.h"

/**
 * free_listint2 - frees a listint_t list sets the head to NULL.
 * @head: pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *new_node;
	if (head == NULL)
	return;

	while (*head)
	{
		new_node = (*head)->next;
		free(*head);
		*head = new_node;

	}
	*head = NULL;
}
