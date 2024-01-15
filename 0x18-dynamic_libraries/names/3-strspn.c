#include "main.h"
#include <string.h>

/**
* _strspn - main function
*@s: The string to be searched
*@accept: The set of bytes to be searched for in 's'
* Return: Always return number of bytes in 's'
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int a;

while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
{
count++;
break;
}
else if (accept[a + 1] == '\0')
return (count);
}
s++;
}
return (count);
}
