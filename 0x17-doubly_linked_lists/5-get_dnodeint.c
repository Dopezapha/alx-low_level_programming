#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
* @head: Pointer to the head of the list.
* @index: Index of the node to retrieve, starting from 0.
* Return: Pointer to the nth node, or NULL if the node does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int i;

/* Traverse the list until reaching the desired index or the end of the list */
for (i = 0; current != NULL && i < index; i++)
{
current = current->next;
}

/* If the index is valid, current points to the nth node; otherwise, NULL */
return (current);
}
