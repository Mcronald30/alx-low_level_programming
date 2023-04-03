#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the list.
 * @index: nth node.
 * Return: NULL, if the node doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int count = 0;

	while (current_node != NULL)
	{
		if (count == index)
		{
			return (current_node);
	}
	count++;
	current_node = current_node->next;
	}
	return (NULL);
}
