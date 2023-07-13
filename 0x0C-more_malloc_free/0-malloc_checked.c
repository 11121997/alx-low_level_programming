#include "main.h"
/**
**malloc_checked - function that allocates memory
*@b: unsigned int
*Return: m
*/

void *malloc_checked(unsigned int b)
{
	char *m = malloc(b);

	if (m == 0)
	{
		exit(98);
	}
	return (m);
}
