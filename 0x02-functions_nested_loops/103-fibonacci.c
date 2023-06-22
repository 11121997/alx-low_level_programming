#include <stdio.h>

/**
*main - Entry point
*
*Description: prints the sum of the even-valued terms
*
*Return: Always 0 (success)
*/

int main(void)
{
long x = 0, y = 1, sum;
float total;
while (1)
{
sum = x + y;
if (sum > 4000000)
	break;
if ((sum % 2) == 0)
	total += sum;
		x = y;
y = sum;
}
printf("%.0f\n", total);
return (0);
}
