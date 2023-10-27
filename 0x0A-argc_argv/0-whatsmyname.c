#include "main.h"
/**
*main: print a name followed by a new line
*@argc: the number of command line arguments.
*@argv: an array containing the command-line arguments.
*Return: Always return '0' success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
int a;
for (a = 0; argv[0][a] != '\0'; a++)
{
_putchar(argv[0][a]);
}
_putchar('\n');
return (0);
}
