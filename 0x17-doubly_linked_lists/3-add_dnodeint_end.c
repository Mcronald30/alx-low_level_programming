#include "lists.h"

/**
 * add_dnodeint_end -  pointer of a doubly linked list.
 * @head: head pointer of a doubly linked list.
 * @n: value for the new node to be added
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		dlistint_t *head = head;
		while (head->next != NULL)
		{
			head = head->next;
		}
		head->next = newNode;
		newNode->prev = head;
	}
	return (newNode);
}
