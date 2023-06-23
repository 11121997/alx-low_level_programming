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
		if (i > 9)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
	}
}
