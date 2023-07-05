#include "main.h"
/**
**_memset - function that fills memory with a constant byte
*@s: pointer to put constant
*@b: constant byte
*@n: max bytes
*@Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int it;

	for (it = 0; n > 0; it++, n--)
	{
		s[it] = b;
	}

	return (s);
}
