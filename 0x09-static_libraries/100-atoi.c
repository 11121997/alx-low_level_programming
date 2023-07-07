#include "main.h"

/**
*_atoi - function that convert a string to an integer
*@s: integer parameter
*Return: integer from string
*/

int _atoi(char *s)
{
	int c = 0;
	unsigned int n = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			n = (n * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
		c++;
	}
	n *= min;
	return (n);
}
