#include "main.h"
#include <string.h>

/**
* _strstr - locates a substring
* @needle: A substring
* @haystack: A string
* Return: Returns a pointer to the beginning of the
* located substring, or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *A = haystack;
char *B = needle;
while (*A == *B && *B != '\0')
{
A++;
B++;
}
if (*B == '\0')
return (haystack);
}
return (NULL);
}
