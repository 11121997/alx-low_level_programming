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
	for (; *haystack !=0; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
