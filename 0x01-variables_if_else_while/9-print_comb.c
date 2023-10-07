#include <stdio.h>

/**
* main - Entry point
*
* Description: Program that prints all combinations
*
* of single digit numbers.
*
* Return: Always 0 (success)
*/

int main(void)
{
	int a;

	for (a = 0 ; a < 10 ; a++)
	{
		putchar(a);
		putchar('.');
		putchar(' ');
	}

	putchar('\n');

	return (0);

}
