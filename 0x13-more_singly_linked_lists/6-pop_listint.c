#include "lists.h"

/**
* pop_listint - Removes the head node of a listint_t linked list.
* @head: Pointer to the head of the list (a pointer to a pointer).
* Return: Data of the popped node, or 0 if the list is empty.
**/
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;

if (*head == NULL)
return (0);

/* Save the data of the head node */
data = (*head)->n;

/* Save the reference to the head node */
temp = *head;

/* Move the head pointer to the next node */
*head = (*head)->next;

/* Free the memory of the original head node */
free(temp);

/* Return the data of the popped node */
return (data);
}
