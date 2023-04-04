#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: A pointer to the head node of the list.
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	int data;
	size_t count = 0;

	listint_t *node;
		if (!h || !*h)
			return (0);
	while (*h)
	{
		data = *h - (*h)->next;
		if (data > 0)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
