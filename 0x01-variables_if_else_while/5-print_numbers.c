#include <stdio.h>

/**
* main - Entry point
*
* Description: Code that prints lowercase alphabets.
*
* Return: Always 0 (success)
*/

	int main(void)

{
	int a;

	for (a = 0 ; a < 10 ; a++)
	{
	printf("%d", a);
	if (a < 9)
	printf(" ");
	}

	printf("\n");

	return (0);

}
