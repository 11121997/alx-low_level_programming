#include "main.h"
/**
*print_number - function that prints an integer
*@n: integer number
*/

void print_number(int n)
{
	int x = n;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	x /= 10;

	if (x != 0)
	{
		_putchar(x + '0');
		_putchar((int) n % 10 + '0');
	}
}
