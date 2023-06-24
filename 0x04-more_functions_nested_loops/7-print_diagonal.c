#include "main.h"

/**
*print_diagonal - function that draws a diagonal line on the terminal
*@n: is the number of times \ character
*/

void print_diagonal(int n)
{
	int i, spc;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (spc = 1; spc <= i; spc++)
			_putchar(' ');
			_putchar(92);
			_putchae('\n');
		}
	}
}
