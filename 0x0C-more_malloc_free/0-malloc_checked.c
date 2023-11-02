#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
*malloc_checked - a function that allocates memory using malloc.
*@b: the number of bytes to allocate
*Return: Always return a pointer
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
