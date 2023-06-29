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

	for (; i != '\0'; i++)
	{
		for (i = 0; i != '\0'; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
