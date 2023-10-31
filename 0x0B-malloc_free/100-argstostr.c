#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenates arguments of the program into string;
* @ac: The number of arguments passed to the program.
* @av: An array of pointers to the argument.
* Return: If ac is 0, av is NULL, or the function fails - NULL.
* Otherwise - a pointer to the new string.
*/
char *argstostr(int ac, char **av)
{
	char *ptstr;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	ptstr = malloc(sizeof(char) * size + 1);

	if (ptstr == NULL)
	{
		return (NULL);
	}

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			ptstr[index++] = av[arg][byte];

		ptstr[index++] = '\n';
	}

	ptstr[size] = '\0';

	return (ptstr);
}
