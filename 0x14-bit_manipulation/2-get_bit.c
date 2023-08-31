#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * at specific index
 * @n: number converted to binary
 * @index: index of the bit
 * Return:  the value of the bit at index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
