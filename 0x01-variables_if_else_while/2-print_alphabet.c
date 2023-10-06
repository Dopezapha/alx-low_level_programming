#include <stdlib.h>
#include <stdio.h>

/**
*main - Entry point
*
*Description: Code that prints lower case alphabets.
*
*Return: Always 0 (success)
*/

int main(void)
{
	char c;
	c = 'a';
	
	while (c <= 'z')
	{
	putchar(c);
	c = c + 1;
	}
	return (0);
}
