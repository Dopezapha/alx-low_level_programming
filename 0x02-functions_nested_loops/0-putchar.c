#include "main.h"
#include <stdio.h>
/**
* main - Entry point
*
* Description: Code that prints _putchar
*
* Return: Always 0 (success)
*/

int main(void)
{
	char c[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};

	int a = 0;

	while (c[a] != '\0')
	a = a + 1;

	{
	putchar(c[a]);
	}

	putchar('\n');

	return (0);
}
