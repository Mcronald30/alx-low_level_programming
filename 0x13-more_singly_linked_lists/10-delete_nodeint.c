#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: pointer to the first node of the linked list.
 * @index: The index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_node = *head;
	listint_t *node_to_delete = *head;
	unsigned int idx;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	idx = index - 1;
	while (new_node && count != idx)
	{
		count++;
		new_node = new_node->next;
	}
	if (count == idx && new_node)
	{
		node_to_delete = new_node->next;
		new_node->next = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}
	return (-1);
}
