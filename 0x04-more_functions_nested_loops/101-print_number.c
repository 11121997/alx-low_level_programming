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
		n *= -1;
		_putchar('-');
	}
	if ((x / 10) > 0)
	{
		print_number(x / 10);
		_putchar((x % 10) + '0');
	}
}
