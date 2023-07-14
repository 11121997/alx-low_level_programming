#include "main.h"
/**
**_memset - fills memory with a bytes
*@s: pointer
*@b: character
*@n: int
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
**_calloc - function that allocates memory for an array
*@nmemb: array length
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
