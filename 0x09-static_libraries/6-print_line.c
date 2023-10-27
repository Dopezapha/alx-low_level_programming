#include "main.h"

/**
*print_line - Draw a straight line in the terminal.
*
*@n: number of times the character _ should be printed.
*/
void print_line(int n)
{
	if (n <= 0)
{
	_putchar('\n');
	}
	else
	{
	int b;

	for (b = 1; b <= n; b++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
