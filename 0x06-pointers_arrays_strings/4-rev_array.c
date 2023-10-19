#include "main.h"
#include <string.h>

/**
*reverse_array - Reverse the elements of an integer array.
*@a: The integer array to be reversed.
*@n: The number of elements in the array.
*/
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}

