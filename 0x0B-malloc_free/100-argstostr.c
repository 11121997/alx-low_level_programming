#include "main.h"
#include <stdlib.h>
/**
*_strlen - function that find length of array
*@s: string array
*Return: size
*/

int _strlen(char *s)
{
	int size = 0;

	for (;s[size] != '\0'; size++)
		;
	return (size);
}

/**
**argstostr - function that concatenates all the arguments
*@ac: int
*@av: string array
*Return: s
*/

char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, nc++)
		nc += _strlength(av[i]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];

		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
