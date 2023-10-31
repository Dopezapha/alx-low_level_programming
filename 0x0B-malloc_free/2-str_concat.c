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
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	ptr = malloc((len1 + len2) * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		ptr[i + j] = s2[j];

	ptr[len1 + len2] = '\0';
	return (ptr);
}
