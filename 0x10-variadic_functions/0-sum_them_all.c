#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - function that return the sum of all parameters
*@n: number of arguments
*@...: the integers to sum
*Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (i--)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
