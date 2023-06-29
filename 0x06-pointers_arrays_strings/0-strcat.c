#include "main.h"

/**
**_strcat - function that concatenates two strings
*@dest: string
*@src: string
*Return: string dest
*/


char *_strcat(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0')
	return (dest);
}
