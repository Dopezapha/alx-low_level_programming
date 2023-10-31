#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*_strdup - allocates a space in memory and makes
*a copy of the string given as a parameter.
*@str: the string to be considered
*Return: Always return a pointer to the string.
*/
char *_strdup(char *str)
{
char *ptstr;
int a;
int i;
if (str == 0)
{
return (NULL);
}
for (a = 0; str[a] != '\0'; a++)
{
ptstr = malloc(a * sizeof(char) + 1);
}
if (ptstr == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
ptstr[i] = str[i];
}
ptstr[i] = '\0';
return (ptstr);
}
