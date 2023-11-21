#include "lists.h"
/**
*sum_listint - Calculates the sum of integer values in a listint_t linked list.
*@head: Pointer to the head of the listint_t list.
*Return: The sum of integer values in the linked list, or 0 if the list is
*empty.
*/
int sum_listint(listint_t *head)
{
int sum = 0;  /* Use an integer variable to store the sum */

if (head == NULL)
return (0);  /* Return 0 for an empty list */

/* Traverse the list and add up the values */
while (head != NULL)
{
sum += head->n;  /* Add the value of the current node to the sum */
head = head->next;  /* Move to the next node */
}

return (sum);  /* Return the calculated sum */
}

