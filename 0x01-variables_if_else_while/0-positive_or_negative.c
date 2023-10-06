#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: Code that prints the number stored in a variable
*
* Return: Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is negative\n");
	}
	else if (n == 0)
	{
		printf("n is zero\n");
	}
	else
	{
		printf("n is negative\n");
	}
		printf("value of n is : %d\n", n);
	return (0);
}
