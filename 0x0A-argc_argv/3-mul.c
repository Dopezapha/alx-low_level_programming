#include <stdio.h>
#include <stdlib.h>
/**
*main - multiply two numbers
*@argc: The number of command line arguments.
*@argv: An array containing the command line arguments.
*Return: Always return '0'
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
