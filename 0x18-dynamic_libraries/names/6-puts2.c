#include "main.h"
/**
*puts2 -  prints the character of a string
*followed by a new line.
*@str: string to be printed
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i += 2;
	}
	_putchar('\n');
}
