#include "main.h"
#include <string.h>

/**
*_memcpy - copies n bytes from one memory area to another.
*@src: memory area to be copied
*@dest: memory area to be copied to.
*@n: number of bytes to be copied.
*Return: Always return to a pointer 'dest'
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
