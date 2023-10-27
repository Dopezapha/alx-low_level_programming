#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string in reverse
 * order followed by a new line.
 * @s: the input string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int j;

	for (j = length - 1; j >= 0; j--)
	{
	_putchar(s[j]);
	}
	_putchar('\n');
}
