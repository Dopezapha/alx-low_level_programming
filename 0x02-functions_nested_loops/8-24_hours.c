#include "main.h"

/**
 * jack_bauer - A function that prints every minute of the day of
 *
 * Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: The last digit of n.
 */
void jack_bauer(void)
{
	int a = 0;
	int b;

	while (a < 24)
	{
	b = 0;
	while (b < 60)
	{
	_putchar((a / 10) + '0');
	_putchar((a % 10) + '0');
	_putchar(':');
	_putchar((b / 10) + '0');
	_putchar((b % 10) + '0');
	_putchar('\n');
	b++;
	}
	a++;
	}
}

