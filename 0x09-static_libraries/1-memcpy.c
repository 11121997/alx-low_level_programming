#include "main.h"
/**
**_memcpy -function that copies memory area
*@dest: memory area
*@src: memory area
*@n: bytes
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int it;

	for (it = 0; it < n; it++)
	{
		dest[it] = src[it];
	}

	return (dest);
}
