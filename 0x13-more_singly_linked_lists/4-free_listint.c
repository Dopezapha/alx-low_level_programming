#include "lists.h"

/**
* free_listint - Frees the memory allocated for a
* listint_t linked list.
* @head: Pointer to the head of the list.
**/
void free_listint(listint_t *head)
{
listint_t *current = head;
listint_t *next_node;

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
}
