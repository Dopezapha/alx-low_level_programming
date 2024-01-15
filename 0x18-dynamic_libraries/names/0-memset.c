#include "main.h"
#include <string.h>

/**
*_memset - Fills the memory with a constant byte
*@s: memory area to be filled
*@b: constant byte to fill with
*@n: number of bytes to fill
*Return: A pointer to the original memory area 's'
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
