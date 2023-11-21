#include "lists.h"

/**
* add_nodeint_end - Adds a new node with a given integer to the
* end of a listint_t.
* @head: Address of the first node of a listint_t.
* @n: Integer value to insert into the new node.
* Return: Address of the new node, or NULL if it fails.
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *temp;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

/* Assign the value of n to the new node's n member */
new->n = n;
/* Set the next pointer of the new node to NULL */
new->next = NULL;

/* If the list is empty, make the new node the head of the list */
if (*head == NULL)
{
*head = new;
return (new);
}

temp = *head;
/* Traverse the list to find the last node */
while (temp->next != NULL)
temp = temp->next;

/* Attach the new node to the last node's 'next' */
temp->next = new;
return (new);
}
