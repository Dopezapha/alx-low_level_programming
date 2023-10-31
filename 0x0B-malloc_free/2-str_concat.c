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
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;

	if (s1 != NULL)
		{
		len1 = strlen(s1);
		}
	if (s2 != NULL)
		{
		len2 = strlen(s2);
		}
	ptr = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (ptr == NULL)
		{
		return (NULL);
		}
	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
		{
		ptr[i] = s1[i];
		}
	for (j = 0; s2 != NULL && s2[j] != '\0'; j++)
	{
	ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
