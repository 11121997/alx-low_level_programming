#include "main.h"

/**
 *flip_bits - function that returns the number of bits to flip
 *@n: first number to flip
 *@m: second number
 *Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int Xor = n ^ m;
	unsigned int count = 0;

	while (Xor)
	{
		if (Xor & 1ul)
			count++;
		Xor = Xor >> 1;
	}
	return (count);
}
