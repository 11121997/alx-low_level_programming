#include "main.h"
/**
*isLower - function checks lowercase
*@c: character
*Return: 1 if true and 0 if false
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
*isDelimiter - function checks delimiter
*@c: character
*Return: 1 if true 0 if false
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,;!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}
/**
**cap_string - function that capitalizes all words of a string
*@s: string array
*Return: s string
*/

char *cap_string(char *s)
{
	int foundDelimit = 1;

	if (isDelimiter(*s))
	{
		foundDelimit = 1;
	}
	else if (isLower(*s) && foundDelimit)
	{
		*s -= 32;
		foundDelimit = 0;
	}
	else
		foundDelimit = 0;
	s++;
	return (s);
}
