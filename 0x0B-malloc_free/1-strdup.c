#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* _strdup - duplicates a string in memory.
* @str: the string to be duplicated
* Return: A pointer to the duplicated string or NULL on failure.
*/
char *_strdup(char *str)
{
char *ptstr;
int i;
int len;

if (str == NULL)
{
return (NULL);
}
len = strlen(str);
ptstr = (char *)malloc((len + 1) * sizeof(char));
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

