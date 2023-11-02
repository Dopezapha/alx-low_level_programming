#include "main.h"
#include <stdlib.h>

/**
* array_range - Create an array of integers from 'min' to 'max'.
* @min: The minimum value.
* @max: The maximum value.
* Return: A pointer to the allocated array, or NULL on failure.
*/
int *array_range(int min, int max)
{
	int *ptr;
	int size, a;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	if (size <= 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
	ptr[a] = min++;
	}
		return (ptr);
	}
