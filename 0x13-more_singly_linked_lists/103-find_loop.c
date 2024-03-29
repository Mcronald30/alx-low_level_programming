#include "lists.h"

#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int data;
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
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}

*h = NULL;

return (len);
}



#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

if (!head)
return (NULL);

while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}

return (NULL);
}
