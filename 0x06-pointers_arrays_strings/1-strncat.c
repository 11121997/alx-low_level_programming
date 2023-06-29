#include "main.h"
/**
**_strncat - function that concatenates two strings
*@dest: a string
*@src: a string
*@n: number of bytes
*Return: dest string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, i2;

	while (dest[i])
		i++;
	for (i2 = 0; src[i2]; i2++)
	{
		while (i2 <= n)
		{
			dest[i++] = src[i2];
		}
	}
	return (dest);
}
