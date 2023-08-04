#include "main.h"

/**
 *clear_bit - function that sets the value of a bit to 0
 *@n: integer number
 *@index: index of bit
 *Return: 1 if it worked, or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
