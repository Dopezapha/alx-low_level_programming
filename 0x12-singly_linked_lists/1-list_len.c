#include "lists.h"

/**
* list_len - A function that returns the number of elements in list_t.
* @h: A pointer to the first (head) of the linked list.
* Return: Always return the number of nodes in the linked list.
*/

size_t list_len(const list_t *h)

{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
