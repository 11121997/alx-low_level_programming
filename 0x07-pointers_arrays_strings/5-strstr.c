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
	for (; haystack != '\0'; hastack++)
	{
		char *p = haystack;
		char *p2 = needle;

		while (*p == *p2 && *p2 != '\0')
		{
			*p++;
			*p2++;
		}
		if (*p2 == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
