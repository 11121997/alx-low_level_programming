#include "main.h"
/**
**_memset - fills memory with a bytes
*@s: string array
*@b: character
*@n: int
*Return: ptr
*/

char *_memset(char *s, char b, int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
**_calloc - function that allocates memory for an array
*@nmemb: numer of elements
*@size: number of bytes
*Return: m
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);

	m = malloc(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
