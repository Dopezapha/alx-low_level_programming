#include <stdio.h>

/**
* main - Entry point
*
* Description: Code that prints all single digit numbers
*
* to base 10 starting from 0 and followed by a new line.
*
* Return: Always 0 (success)
*/

	int main(void)
{
	int c;

	for (c = 0 ; c < 10 ; c++)
	{
	putchar(c + '0');
	}
	putchar('\n');

	return (0);
}
