#include <stdio.h>

/**
* main - Entry point
*
* Description: Code that prints lowercase and uppercase alphabets.
*
* Return: Always 0 (success)
*/

int main(void)

{
	char c;
	char d;

	c = 'a';
	d = 'A';
	while (c <= 'z' && d <= 'Z')
	{
	putchar(c);
	c = c + 1;
	}

	while (d <= 'Z')
	{
	putchar(d);
	d = d + 1;
	}

	putchar('\n');

	return (0);

}
