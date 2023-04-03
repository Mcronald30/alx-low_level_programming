#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the head of the list.
 * Return: 0 Success.
 */

int pop_listint(listint_t **head)
{
	int data = (*head)->n;
	listint_t *temp_node = *head;

	if (*head == NULL)
	{
		return (0);
	}

	*head = temp_node->next;
	free(temp_node);

	return (data);
}
