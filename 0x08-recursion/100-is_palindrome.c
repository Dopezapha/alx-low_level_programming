#include "main.h"

/**
*is_palindrome - check if a string is a palindrome
*@s: string to be considered
*Return: Always return '1' if the string is palindrome and '0' if otherwise
*/
int is_palindrome(char *s)
{
if (*s == 0)
{
return (1);
}
return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
*_strlen_recursion - return the length of a string
*@s: string to be considered
*Return: Always return length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}

/**
*check_pal - check the characters recursively for palindrome
*@s: string to be considered
*@i: iterator
*@len: length of the string
*Return: Always return '1' if the string is palindrome and '0' if otherwise
*/
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
{
return (0);
}
if (i >= len)
{
return (1);
}
return (check_pal(s, i + 1, len - 1));
}

