#include "main.h"
#include <stdlib.h>

/**
* _realloc - Reallocate a memory block.
* @ptr: Pointer to the previously allocated memory.
* @old_size: Size (in bytes) of the old allocated space for ptr.
* @new_size: The new size (in bytes) for the reallocated memory block.
* Return: A pointer to the reallocated memory, or NULL on failure.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int a;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
	for (a = 0; a < old_size; a++)
	{
		new_ptr[a] = ((char *)ptr)[a];
	}
	}
	else
	{
	for (a = 0; a < new_size; a++)
	{
		new_ptr[a] = ((char *)ptr)[a];
	}
	}
		free(ptr);
		return (new_ptr);
}

