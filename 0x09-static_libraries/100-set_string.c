#include "main.h"
#include <stdio.h>
/**
*set_string - set the value of a pointer to a char.
*@s: pointer to pointer parameter
*@to: pointer parameter
*Return: Always return void
*/
void set_string(char **s, char *to)
{
*s = to;
}
