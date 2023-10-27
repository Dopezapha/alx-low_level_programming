#include <stdio.h>
#include <stdlib.h>
/**
*main - Print all the arguments it recieves
*@argc: The number of command line arguments.
*@argv: An array containing the command line arguments.
*Return: Always return '0'
*/
int main(int argc, char *argv[])
{
int a;
for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
return (0);
}
