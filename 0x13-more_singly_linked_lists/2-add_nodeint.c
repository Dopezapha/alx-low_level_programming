#include "lists.h"

/**
* add_nodeint - function that adds a new node at the beginning of a linked list
* @head: pointer to the listint_t list
* @n: integer value to add in the node
* Return: the address of the new element, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new; /* Declare a pointer to a new node */

/* Allocate memory for the new node */
new = malloc(sizeof(listint_t));
if (!new)
return (NULL); /* Return NULL if memory allocation fails */

new->n = n; /* Assign the value of n to the new node's n member */
new->next = (*head); /* ptr of the new node to the current head of the list */
(*head) = new; /* Update the head pointer to point to the new node */

return (*head); /* Return the address of the new element */
}
