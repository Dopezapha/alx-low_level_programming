#include <stdio.h>
#include <stdlib.h>

/**
* main - Print the minimum number of coins to make
* change for an amount of money.
* @argc: The number of command line arguments.
* @argv: An array containing the command line arguments.
* Return: Always return '0'
*/
int main(int argc, char *argv[])
{
int cents, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents <= 0)
{
printf("Error\n");
return (1);
}
while (cents > 0)
{
if (cents >= 25)
{
coins += cents / 25;
cents %= 25;
}
else if (cents >= 10)
{
coins += cents / 10;
cents %= 10;
}
else if (cents >= 5)
{
coins += cents / 5;
cents %= 5;
}
else
{
coins += cents;
break;
}
}
printf("%d\n", coins);
return (0);
}
