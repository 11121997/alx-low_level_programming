#include "main.h"

/**
**_strcat - function that concatenates two strings
*@dest: string
*@src: string
*Return: string dest
*/


char *_strcat(char *dest, char *src)
{
	int i, i2;

	i = 0;

	while (dest[i])
		i++;
			for (i2 = 0; src[i2]; i2++)
				dest[i++] = src[i2];
	return (dest);
}
