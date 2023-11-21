#include "lists.h"

/**
* free_listint2 - Frees the memory allocated for a listint_t linked list.
* @head: Pointer to the head of the list (a pointer to a pointer).
*/
void free_listint2(listint_t **head)
{
listint_t *current, *next_node;

/* Check if head is NULL */
if (head == NULL)
return;

/* Set the current pointer to the head of the list */
current = *head;

/* Traverse the list */
while (current != NULL)
{
/* Save the next node before freeing the current node */
next_node = current->next;

/* Free the current node */
free(current);

/* Move to the next node */
current = next_node;
}

/* Set the head pointer to NULL after freeing all nodes */
*head = NULL;
}
