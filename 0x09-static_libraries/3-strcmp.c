#include "main.h"
#include <string.h>

/**
* _strcmp - compare two strings.
* @s1: the first string to compare
* @s2: the second string to compare
* Return: '0' if the strings are equal,
* a value less than '0' if s1 is less than s2,
* a value greater than '0' if s1 is greater than s2
*/
int _strcmp(char *s1, char *s2)
{
int a;
for (a = 0; s1[a] != '\0' && s1[a] == s2[a]; a++)
{
}
return (s1[a] - s2[a]);
}
