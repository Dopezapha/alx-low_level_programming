#include <stdint.h>
#include "main.h"

/**
*get_endianness - Checks the endianness of the system.
*Return: 0 if big endian, 1 if little endian.
*/
int get_endianness(void)
{
uint32_t num = 1;  /* Use a 4-byte variable to check endianness */
uint8_t *byte_ptr = (uint8_t *)&num;

/*
*If the least significant byte is stored at the lowest address,
*it's little endian
*/
return (*byte_ptr == 1);
}
