#include "main.h"

/**
*rev_string - function that reverses a string
*@s: string parameter
*/

void rev_string(char *s)
{
	int l, i;
	char tmp;

	while (s[i++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}
