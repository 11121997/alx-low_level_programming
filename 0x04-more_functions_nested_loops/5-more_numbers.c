#include "main.h"

/**
*more_numbers - function that prints 10 times the numbers
*/

void more_numbers(void)
{
	int ln, i;

	for (ln = 0; ln <= 10; ln++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar(ln + '0');
			_putchar('\n');
	}
}
