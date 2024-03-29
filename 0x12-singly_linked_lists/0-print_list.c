#include "lists.h"

/**
*print_list - prints elements of a list_t
*@h: pointer to the first element in the list
*Return: Always return the number of nodes in the list
*/
size_t print_list(const list_t *h)
{
size_t count = 0;

for (; h; h = h->next, count++)
{
if (!h->str)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
}
return (count);
}

