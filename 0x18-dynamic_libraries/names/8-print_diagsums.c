#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print the sum of the two
* diagonals of a square matrix of integers.
* @size: function parameter
* @a: function parameter
* Return: Always return success
*/
void print_diagsums(int *a, int size)
{
int i = 0;
int j = 0;
int x;
for (x = 0; x < size; x++)
{
i = i + a[x * size + x];
}
for (x = size - 1; x >= 0; x--)
{
j += a[x * size + (size - x - 1)];
}
printf("%d, %d\n", i, j);
}
