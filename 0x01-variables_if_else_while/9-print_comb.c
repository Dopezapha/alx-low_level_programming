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
	putchar('0' + a);
	if (a < 7)
		{
		putchar('.');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
