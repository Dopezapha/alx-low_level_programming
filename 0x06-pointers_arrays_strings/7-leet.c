#include"main.h"
#include <string.h>

/**
* leet - Encode a string into 1337.
* @p: The input string to be encoded.
* Return: A pointer to the modified input string (p).
*/
char *leet(char *p)
{
	char *result = p;

	while (*p)
	{
	int is_lowercase = (*p >= 'a' && *p <= 'z');
	int is_uppercase = (*p >= 'A' && *p <= 'Z');

	if (is_lowercase || is_uppercase)
	{
	if ((*p == 'a' || *p == 'A'))
	*p = '4';
	else if ((*p == 'e' || *p == 'E'))
	*p = '3';
	else if ((*p == 'o' || *p == 'O'))
	*p = '0';
	else if ((*p == 't' || *p == 'T'))
	*p = '7';
	else if ((*p == 'l' || *p == 'L'))
	*p = '1';
	}
	p++;
	}
	return (result);
}
