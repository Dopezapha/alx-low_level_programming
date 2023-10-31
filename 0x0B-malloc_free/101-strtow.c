#include <stdlib.h>
#include "main.h"

/**
* count_word - function to count number of words in a string
* @s: string to check
* Return: number of words
*/
int count_word(char *s)
{
	int check, a, b;

	check = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			check = 0;
		else if (check == 0)
		{
			check = 1;
			b++;
		}
	}

	return (b);
}
/**
* strtow - splits a string into words
* @str: string to split
* Return: pointer to an array of strings (Success)
* or NULL (Error)
*/
char **strtow(char *str)
{
	char **mat, *tmp;
	int a, b = 0, length = 0, words, c = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (a = 0; a <= length; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mat[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	mat[b] = NULL;

	return (mat);
}
