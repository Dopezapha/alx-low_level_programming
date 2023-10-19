#include "main.h"
#include <stdio.h>
/**
*leet - Encode a string into 1337.
*
*@p: The input string to be encoded.
*
*Return: A pointer to the modified input string
*/

char *leet(char *p)
{
	int j, k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (j = 0; p[j] != '\0'; j++)
	{
	for (k = 0; k < 10; k++)
	{
	if (p[j] == s1[k])
	{
	p[j] = s2[k];
	}
	}
	}
	return (p);
}

