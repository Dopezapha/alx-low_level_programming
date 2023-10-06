#include <stdio.h>

/**
* main - this is a program that prints all alphabet
*
* in lower case and upper case.
*
* Return: Always
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}

	putchar('\n');

	return (0);

}

