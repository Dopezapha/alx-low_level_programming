#include "lists.h"
/**
*get_nodeint_at_index - Retrieves the node at a given index in a linked list.
*@head: Pointer to the head of the linked list.
*@index: The index of the node to retrieve (0-based).
*Return: Pointer to the node at the specified index, or NULL if the index is
*out of bounds.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *nth = head;
unsigned int a;
/* Traverse the list until the desired index or the end is reached */
for (a = 0; nth != NULL && a < index; a++)
{
nth = nth->next;
}

return (nth); /* Return the node at the specified index */
}
