#include "main.h"
#include <stdio.h>

/**
* main - A program that prints the first 50 Fibonacci
*
* numbers, starting with 1 and 2.
*
* Return: 0
*/

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int next;
	int c;

	printf("%dlu, ", a);
	for (c = 1; c < 50; c++)
	{
	printf("%lu", b);
	next = a + b;
	b = next;
	if (c != 49)
	printf(", ");
	}
	printf('\n')
	return (0);
}

