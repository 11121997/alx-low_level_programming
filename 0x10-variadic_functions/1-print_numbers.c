#include "variadic_functions.h"
/**
*print_numbers - function that prints numbers
*@separator: string to be printed
*@n: number of integers passed
*Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i--)
		printf("%d%s", va_arg(ptr, int),
				i ? (separator ? separator : "") : "\n");
	va_end(ptr);
}
