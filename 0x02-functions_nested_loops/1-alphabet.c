#include "main.h"

/**
 * main - program that prints alphabets
 *
 * Return: Always 0.
 */

int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c = c + 1;
	}
	_putchar('\n');

	return (0);

}
