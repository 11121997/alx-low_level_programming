#include "main.h"

/**
 * flip_bits -  function that returns the number of bits are needed
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	unsigned int counter = 0;

	while (XOR)
	{
		if (XOR & 1ul)
			counter++;
		XOR = XOR >> 1;
	}
	return (counter);
}
