#include "main.h"
/**
*is_prime_number - print an integer that is a prime number.
*@n: number to be considered
*Return: Return 1 if the input integer is a
*prime number, otherwise return 0.
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (actual_prime(n, n - 1));
}

/**
*actual_prime - calculates if a number is prime recursively
*@n: number to be considered.
*@i: iterator
*Return: Return 1 if the input integer is a
*prime number, otherwise return 0.
*/
int actual_prime(int n, int i)
{
if (i == 1)
{
return (1);
}
if (n % i == 0 && i > 0)
{
return (0);
}
return (actual_prime(n, i - 1));
}

