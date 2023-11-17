#include "main.h"

/**
* print_list - prints the elements of a singly linked list
* @h: pointer to the head of the list
* Return: the number of nodes in the list
*/
size_t print_list(const list_t *h)
{
size_t count = 0;

printf("[");

for (; h != NULL; h = h->next)
{
if (h->str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", h->str);
}
count++;

if (h->next != NULL)
{
printf(", ");
}
}
printf("]\n");
return (count);
}

