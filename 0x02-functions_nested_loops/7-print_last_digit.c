#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number.
 *
 * @n: The integer to extract the last digit from.
 *
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{

	int a;

	if (n < 0)
	{
	n = -n;
	}
	a = n % 10;
	if (a < 0)
	{
	a = -a;
	}
	_putchar(a + '0');
	return (a);
}
