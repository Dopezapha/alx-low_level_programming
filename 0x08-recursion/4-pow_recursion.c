#include "main.h"
#include <string.h>
/**
*_pow_recursion - return the value of x raised to the power of y.
*@x: first value to be considered
*@y: second value to be considered
*Return: Always return the value of 'x' raised to pwer 'y'.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	return ((x) * (_pow_recursion(x, y - 1)));
}
