#include "lists.h"

/**
 * free_listint2 - frees a listint_t list sets the head to NULL.
 * @head: pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;
	listint_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;

	}
	*head = NULL;
}
