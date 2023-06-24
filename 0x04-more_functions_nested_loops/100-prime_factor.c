#include <stdio.h>
#include <math.h>

/**
*main - Entry point prints the largest prime factor of the number 612852475143
*Return: Always 0 (success)
*/

int main(void)
{
	long x, max;
	long number = 612852475143;
	double sq = sqrt(number);

	for (x = 1; x <= sq; x++)
	{
		if (number % x == 0)
		{
			max = number / x;
		}
	}
	printf("%ld\n", max);
	return (0);
}
