#include <stdio.h>
#include <stdlib.h>
/**
*main - print a name followed by a new line
*@argc: the number of command line arguments.
*@argv: an array containing the command line arguments.
*Return: Always return '0' success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
