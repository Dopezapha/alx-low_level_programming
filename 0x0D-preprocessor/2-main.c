#include <stdio.h>
/**
*main - a program that prints the name of the file
*it was compiled from.
*Return: Always return success.
*/

#define FILE_DEFINED

int main(void)
{
#ifdef FILE_DEFINED
printf("2-main.c");
printf("\n");
return (0);
}
