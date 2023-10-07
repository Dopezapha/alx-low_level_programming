#include <stdio.h>

/**
* main - Entry point
*
* Description: Code that prints lower case alphabets in
*
* reverse followed by a new line.
*
* Return: Always 0 (success)
*/

int main(void)
{

	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	putchar(c);

	putchar('\n');

	return (0);

}
