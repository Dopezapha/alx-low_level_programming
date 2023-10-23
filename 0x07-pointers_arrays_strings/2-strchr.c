#include "main.h"
#include <string.h>

/**
*_strchr - locates a character in a string.
*@s: The string
*@c: The character to find in the string.
*Return: Always return a pointer 's'if found or 'NULL'
*if chracter is not found.
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	{
	return (s + i);
	}
	}
	return (NULL);
}
