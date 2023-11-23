#include "main.h"
/**
*get_bit - Gets the value of a bit at a given index.
*@n: The unsigned long integer.
*@index: The index of the bit to retrieve.
*Return: The value of the bit at the specified index,
*or -1 if an error occurs.
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)  /* is index within valid range */
{
return (-1);
}

return ((n >> index) & 1);  /* Right shift n by index and get the bit value */
}
