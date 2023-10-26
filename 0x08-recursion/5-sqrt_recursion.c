#include "main.h"
/**
*_sqrt_recursion - return the natural square root of a number.
*@n: number to be determined.
*Return: Always return '-1' if n is not a natural square root and
*natural square root if otherwise.
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
*_sqrt - return the natural square root of a number.
*@n: number to be determined.
*@i: number to be determined.
*Return: Always return '-1' if n is not a natural square root and
*natural square root if otherwise.
*/
int _sqrt(int n, int i)
{
if (n < 0)
{
return (-1);
}
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (_sqrt(n, i + 1));
}
