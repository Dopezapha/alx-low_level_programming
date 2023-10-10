#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{

	char c;
	char d;

	for (c = 0; c < 10; c++)
	{
	d = 'a';
	while (d <= 'z')
	{
	_putchar(c);
	d++;
	}
	_putchar('\n');
	}
}
