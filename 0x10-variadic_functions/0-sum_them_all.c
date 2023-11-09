#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - Returns the sum of all its paramters.
*@n: The number of paramters to be considered
*@...: A variable number of paramters to calculate the sum of.
*Return: Always return 0 if n == 0 otherwise,
*the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list na;
unsigned int i;
int sum = 0;

	va_start(na, n);
	for (i = 0; i < n; i++)
	sum += va_arg(na, int);
	va_end(na);
	return (sum);
}
