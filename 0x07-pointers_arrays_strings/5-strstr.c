#include "main.h"
/**
**_strstr - function that locates a substring
*@haystack: string
*@needle: string to match
*Return: pointer to the beginning of the located substring
*or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	i = 0;
	while (haystack[i] < '\0')
	{
		j = 0;
		while (needle[j] < '\0')
		{
			if (needle[j] == haystack[i])
			{
				p = &haystack[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
