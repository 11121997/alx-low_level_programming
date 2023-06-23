#include "main.h"

/**
*more_numbers - function that prints 10 times the numbers
*/

void more_numbers(void)
{
	int ln, i, n;

	for (ln = 0; ln <= 10; ln++)
	{
		for (i = 0; i <= 14; i++)
		{
		n = i;
	if (i > 9)
	{
	_putchar(1 + '0');
	n = i % 10;
	}
	_putchar(n + '0');
		}
		_putchar('\n');
	}
}
