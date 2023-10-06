#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a specific quote to the standard error.
 *
 * Return: Always 1 (success)
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int i = 0;

	while (msg[i] != '\0')
	{
		write(2, &msg[i], 1);
		i++;
	}
	return (1);
}
