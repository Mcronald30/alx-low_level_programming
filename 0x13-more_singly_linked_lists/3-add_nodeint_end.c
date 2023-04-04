#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of the list.
 * @n: integer.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node;
listint_t *new = *head;

node = malloc(sizeof(listint_t));
if (!node)
return (NULL);

node->n = n;
node->next = NULL;

if (*head == NULL)
{
*head = node;
return (node);
}

while (new->next)
new = new->next;

new->next = node;

return (node);
}
