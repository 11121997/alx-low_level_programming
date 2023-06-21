#include "main.h"
#include <stdio.h>

/**
*print_to_98 -  function that prints all natural numbers from n to 98
*@n: a character that take integer number
*/

void print_to_98(int n)
{
	for (n = 0; n >= 98; n++)
	{
		_putchar(n + '0');
		_putchar(',');
			_putchar(' ');
			if (n == 98)
				break;
	}
	_putchar('\n');
}
