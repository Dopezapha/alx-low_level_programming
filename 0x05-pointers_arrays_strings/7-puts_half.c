#include "main.h"

/**
 * puts_half - function that prints the second half of a string.
 * @str: string to be printed
 * Return: Always returns 0
 */
int puts_half(char *str)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	count++;
	j = (count + 1) / 2;
	while (str[j] != '\0')
	{
	_putchar(str[j]);
	j++;
	}
	return (0);
}
