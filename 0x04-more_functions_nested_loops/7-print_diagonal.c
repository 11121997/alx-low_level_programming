#include "main.h"

/**
*print_diagonal - function that draws a diagonal line
*@n: is the number of times the character \
*/

void print_diagonal(int n)
{
	int x, spc;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (spc = 1; spc <= x; spc++)
				_putchar(' ');
			_putchar('\\');
		}
		_putchar('\n');
	}
}
