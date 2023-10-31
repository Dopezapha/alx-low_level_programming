#include <stdlib.h>
#include <string.h>

/**
* str_concat - concatenate two strings.
* @s1: string to be considered
* @s2: second string to be considered
* Return: A pointer to the concatenated string, or NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int j;
	int len1;
	int len2;

	if (s1 != NULL)
	{
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	}
	if (s2 != NULL)
	{
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	}
	ptr = (char *)malloc(len1 + len2 + 1);

	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
	ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
	ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
