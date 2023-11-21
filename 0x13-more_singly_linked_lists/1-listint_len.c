#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the listint_t list
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0; /* Initialize a variable to count the number of nodes */
while (h != NULL)
{
count++;      /* Increment the count of nodes */
h = h->next;  /* Move to the next node in the list */
}
return (count); /* Return the number of nodes in the list */
}
