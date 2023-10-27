#include "main.h"

/**
*swap_int - swap the value of two integers
*@a: integer to be swapped
*@b: integer to be swapped
*Return: Alaways success 0
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
