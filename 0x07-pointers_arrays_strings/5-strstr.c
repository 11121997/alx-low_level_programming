#include "main.h"
/**
**_strstr - function that locates a substring
*@haystack: array
*@needle: array to match
*Return: pointer to the beginning of the located substring
*or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				p = &needle[j];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
