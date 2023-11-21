#include "lists.h"
/**
* insert_nodeint_at_index - Inserts a new node with a given value at a
* specified index in a listint_t linked list.
* @head: Pointer to the head of the listint_t list (a pointer to a pointer).
* @idx: The index at which the new node should be inserted.
* @n: The value to be assigned to the new node.
* Return: A pointer to the newly inserted node, or NULL on failure.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *current;
unsigned int i;

/* Check if memory allocation for the new node fails */
if ((new = malloc(sizeof(listint_t))) == NULL)
return (NULL);

/* Set the value of the new node to the provided value */
new->n = n;

/* Handle insertion at the beginning of the list (index 0) */
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

/* Traverse the list to the node before the desired index */
current = *head;
for (i = 0; i < idx - 1 && current != NULL; i++)
{
current = current->next;
}

/* Check if the desired index is out of bounds */
if (current == NULL)
{
free(new);
return (NULL);
}

/* Insert the new node at the specified index */
new->next = current->next;
current->next = new;

return (new);
}
