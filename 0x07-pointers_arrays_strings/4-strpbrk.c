#include "main.h"
#include <string.h>

/**
* _strpbrk - searche a string for any of a set of bytes.
* @s: The string to be searched
* @accept: number of bytes to be searched
* Return: Always retun a pointer to the byte in 's'
*/
char *_strpbrk(char *s, char *accept)
{
int a, b;

for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
return (s + a);
}
}
return (s);
}
