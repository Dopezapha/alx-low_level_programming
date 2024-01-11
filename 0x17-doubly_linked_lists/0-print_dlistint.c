#include "lists.h"
/**
* print_dlistint - a function that prints all the elements
* of a dlistint_t list.
* @h: pointer to the node
* Return: Always return the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint *current = h;
size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
