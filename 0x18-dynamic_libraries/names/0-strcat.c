#include "main.h"
#include <string.h>

/**
*_strcat -  concatenate two strings.
*@src: The source string to be concatenated.
*@dest: The destination string to which 'src' is concatenated.
*Return: Always return 'dest'
*/

char *_strcat(char *dest, char *src)
{
int a;
int b;

for (a = 0; dest[a] != '\0'; a++)
{
}
for (b = 0; src[b] != '\0'; b++)
{
dest[a + b] = src[b];
}
dest[a + b] = '\0';
return (dest);
}
