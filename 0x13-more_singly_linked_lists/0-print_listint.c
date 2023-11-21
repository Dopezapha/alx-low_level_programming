#include "lists.h"

/**
*print_listint - function that prints the length of integers in
*a linked list
*@h: pointer to the listint_t list
*Return: the number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0; /* Initialize a variable to count the number of nodes */
while (h)
{
printf("%d\n", h->n); /* Print the integer value of the node */
count++; /* Increment the count of nodes */
h = h->next; /* Move to the next node in the list */
}

return (count); /* Return the number of nodes in the list */
}
