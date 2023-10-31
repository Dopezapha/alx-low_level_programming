#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*create_array - creates an array of chars
*@size: number of characters to be considered
*@c: character to be considered
*Return: Always return a pointer
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int a;

if (size == 0)
{
return (NULL);
}
ptr = malloc(size * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
for (a = 0; a < size; a++)
{
ptr[a] = c;
}
return (ptr);
}
