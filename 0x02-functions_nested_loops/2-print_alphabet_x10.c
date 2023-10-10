#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{

	char c, d

	c = 0;
	for (c <= 10)
	{
	d = 'a';
	for (d <= 'z')
	{
	_putchar(c);
	c++;
	}
	}
	putchar('\n')
}
