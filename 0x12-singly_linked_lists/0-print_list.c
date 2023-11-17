#include "lists.h"

/**
* print_list - prints the elements of a singly linked list
* @h: pointer to the head of the list
* Return: the number of nodes in the list
*/
size_t print_list(const list_t *h)
{
size_t count = 0;

for (; h != NULL; h = h->next)
{
if (h->str == NULL)
{
printf("(nil)");
}
else
{
printf("[%lu] %s", strlen(h->str), h->str);
}
count++;

if (h->next != NULL)
{
printf("\n");
}
}

return (count);
}
