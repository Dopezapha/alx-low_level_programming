#include "main.h"

/**
*print_binary - Prints the binary representation
*of an unsigned long integer.
*@n: The unsigned long integer to print in binary.
*/
void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
return;
}

if (n == 1)
{
_putchar('1');
return;
}

print_binary(n >> 1); /* Right shift n by 1 and call the funtion recursively */

_putchar((n & 1) + '0');  /* Print the least significant bit */
}
