#include "main.h"
/**
**string_nconcat - function that concatenates two strings
*@s1: string array
*@s2: string array
*@n: number of bytes
*Return: p
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, l_s1, l_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l_s1 = 0; s1[l_s1] != '\0'; l_s1++)
		;
	for (l_s2 = 0; s2[l_s2] != '\0'; l_s2++)
		;
	p = malloc(l_s1 + n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
