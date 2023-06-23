#include "main.h"

/**
*print_numbers - function that prints the numbers
*@i: character take an integer number
*/

void print_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
		_putchar('\n');
	}
}
