#include "main.h"
/**
**_strncpy - function that copies a string
*@dest: string
*@src: string
*@n: number of bytes
*Return: dest string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = scr[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
