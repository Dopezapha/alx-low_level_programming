#include "lists.h"
/**
* dlistint_len - a function that returns the number
* of elements in a linked dlistint_t list.
* @h: pointer to the head of the list
* Return: Always return the number of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t node_count = 0;

	while (current != 0)
	{
		current = current->next;
		node_count++;
	}
	return (node_count);
}
