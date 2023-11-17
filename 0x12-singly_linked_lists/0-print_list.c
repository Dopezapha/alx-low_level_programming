#include "main.h"

typedef struct list_c
{
char *str;
struct list_c *next;
} list_t;

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
