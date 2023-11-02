#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*string_nconcat - a function that concatenates two strings.
*@s1: the first string to be concatenated.
*@s2: the second string to be concatenated.
*@n: the number of bytes
*Return: Always return a pointer.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a = 0, b = 0;
	unsigned int len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		len1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = strlen(s2);
	}
	if (n > len2)
	{
		n = len2;
	}
	ptr = malloc((len1 + n + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1 && s1[a]; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b < n; b++)
	{
		ptr[a + b] = s2[b];
	}
		ptr[a + b] = '\0';
		return (ptr);
}
