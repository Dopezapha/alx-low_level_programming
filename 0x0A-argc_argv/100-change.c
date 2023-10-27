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
int denominations[] = {25, 10, 5, 2, 1};
int i = 0;

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
if (cents >= denominations[i])
{
cents -= denominations[i];
coins++;
}
else
{
i++;
}
}
printf("%d\n", coins);
return (0);
}
