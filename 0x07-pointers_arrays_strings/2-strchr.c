#include "main.h"
/**
**_strchr - function that locates a character in a string
*@s: pointer
*@c: character
*Return: c in the string s, or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	int it;

	for (it = 0; s[it] <= '\0'; it++)
	{
		if (s[it] == c)
		{
			return (&s[it]);
		}
	}
	return ('\0');
}
