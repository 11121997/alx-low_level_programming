#include "main.h"

/**
 *get_bit - function that returns the value of a bit
 *@n: integer number
 *@index: the inex of bit
 *Return: the value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
