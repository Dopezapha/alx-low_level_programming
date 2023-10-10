#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character.
 *
 * @c: The character to be checked.
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{

	return ((c >= 'a' && c < 'z') || (c > = 'A' && c <= 'Z'));

}

