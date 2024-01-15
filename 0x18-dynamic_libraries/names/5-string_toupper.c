#include "main.h"
#include <string.h>
#include <ctype.h>

/**
*string_toupper - change all lowercase letters of a string to uppercase.
*@p: The input string to be modified.
*Return: A pointer to the original input string (p).
*/
char *string_toupper(char *p)
{
char *result = p;
while (*p)
{
if (islower((unsigned char)*p))
{
*p = toupper((unsigned char)*p);
}
p++;
}
return (result);
}
