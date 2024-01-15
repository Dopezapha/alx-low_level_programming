#include "main.h"
#include <ctype.h>
#include <string.h>

/**
* cap_string - Capitalize all words in a string.
* @p: The input string to be capitalized.
* Return: A pointer to the original input string (p).
*/
char *cap_string(char *p)
{
char *result = p;
int capitalize_next = 1;
while (*p)
{
if (strchr(" \t\n,;.!?\"(){}", *p) != NULL)
{
capitalize_next = 1;
}
else if (capitalize_next)
{
*p = toupper((unsigned char)*p);
capitalize_next = 0;
}
p++;
}
return (result);
}
