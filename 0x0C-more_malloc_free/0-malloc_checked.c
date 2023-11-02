#include <stdlib.h>
#include "main.h"
/**
*malloc_checked - a function that allocates memory using malloc.
*@b: thr number of bytes to allocate
*Return: Always return a pointer
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b * sizeof(void *));
if (ptr == NULL)
{
exit (98);
}
return (ptr);
}
