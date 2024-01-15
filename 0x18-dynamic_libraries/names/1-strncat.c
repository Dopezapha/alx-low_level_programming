#include "main.h"
#include <string.h>
/**
*_strncat - concatenates two strings when n number is declared.
*@dest: destination string to be concatenated
*@src: source string to concatenate dest
*@n: number of bytes used from  src
*Return: Always return 'dest'.
*/
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;
for (a = 0; dest[a] != '\0'; a++)
{
}
for (b = 0; b < n && src[b] != '\0'; b++)
{
dest[a + b] = src[b];
}
dest[a + b] = '\0';
return (dest);
}
