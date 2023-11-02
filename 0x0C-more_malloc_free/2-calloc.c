#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*_calloc - Allocate memory for an array and initialize it to 0.
*@nmemb:array to be considered.
*@size: size of bytes  to be considered.
*Return: Always return a pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
