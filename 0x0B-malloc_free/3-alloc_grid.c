#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - creates 2 dimensional array of integers
* @width: width of matrix to be considered
* @height: height of matrix to be considered
* Return: Always return a pointer to the created matrix (Success)
* or NULL (Error)
*/
int **alloc_grid(int width, int height)
{
	int **ptr;
	int w, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	ptr = (int **) malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (w = 0; w < height; w++)
	{
		ptr[w] = (int *) malloc(sizeof(int) * width);
		if (ptr[w] == NULL)
		{
			free(ptr);
			for (h = 0; h <= w; h++)
				free(ptr[h]);
			return (NULL);
		}
	}

	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
		{
			ptr[w][h] = 0;
		}
	}
	return (ptr);
}
