#include "main.h"

/**
 * print_last_digit -  function that prints the last digit of a number.
 *
 * @n: The integer to extract the last digit from.
 *
 * Return: The last digit of n
 */

int print_last_digit(int n)
{
int a;
if (n < 0)
{
a = -n % 10;
}
else
{
a = n % 10;
}
_putchar(a + '0');

return (a);
}
