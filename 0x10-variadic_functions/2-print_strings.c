#include "variadic_functions.h"
/**
*print_strings - function that prints strings
*@separator: string to be printed between the strings
*@n: number of strings passed
*@...: strings to be print
*Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", str = va_arg(ap, char *) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
