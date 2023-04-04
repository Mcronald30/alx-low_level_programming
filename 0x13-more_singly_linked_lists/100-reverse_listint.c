#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the head node of the list.
 * Return: pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *new_node = NULL;

	while (*head)
	{
		new_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = new_node;
	}
	*head = prev_node;
	return (*head);
}
