#include "main.h"
#include <string.h>

/**
*_puts - a function that prints a string
*followed by a new line.
*@str: the input string to be printed.
*Return: Always success
*/
void _puts(char *str)
{
int j = 0;

while (str[j] != '\0')
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
