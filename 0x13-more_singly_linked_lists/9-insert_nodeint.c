#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *previous_node = *head;
	listint_t *new_node;
	unsigned int index;
	unsigned int count = 0;

	/* create node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* inserting at the beginning */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	/* search of position to insert */
	index = idx - 1;
	while (previous_node && count != index)
	{
		count++;
		previous_node = previous_node->next;
	}

	/* overall situation */
	if (count == index && previous_node)
	{
		new_node->next = previous_node->next;
		previous_node->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
