#include "main.h"

/**
*_strlen - function that returns the length of a string
*@s: string input parameter
*Return: the length of a string
*/

int _strlen(char *s)
{
	int coun;

	for (coun = 0; *s != '\0'; s++)
		++coun;
	return (coun);
}
