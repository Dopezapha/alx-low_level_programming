#include "main.h"
/**
*binary_to_uint - Converts a binary number represented as a string
*to an unsigned integer.
*@b: Pointer to a null-terminated string of '0' and '1' chars
*representing a binary number.
*Return: The converted unsigned integer, or 0 if there is an error:
*if there is one or more chars in the string 'b' that is not '0' or '1'.
*if 'b' is NULL.
*/

unsigned int binary_to_uint(const char *b)
{
const char *ptr;

if (b == NULL)
{
return (0);  /* Return 0 if the input string is NULL */
}

for (ptr = b; *ptr != '\0'; ptr++)
{
if (*ptr != '0' && *ptr != '1')
{
return (0);  /* Return 0 if there is a char in the string not 0 or 1 */
}
}

return (strtol(b, NULL, 2));  /* Convert binary string to unsigned int */
}
