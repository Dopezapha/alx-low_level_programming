#include "main.h"

/**
 * print_sign - A function that prints the sign of a number.
 *
 * @n: The character to be checked.
 *
 * Return: 1 if c is a letter, 0 otherwise.
 */

int print_sign(int n);
{

	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{

	_putchar(48);
	return (0);
	}
	else if (n < 0)
	{
	_putchar('-');
	}
	return (-1);
}
