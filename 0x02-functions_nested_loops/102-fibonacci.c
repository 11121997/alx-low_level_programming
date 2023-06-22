#include <stdio.h>
/**
*main - Entry point
*
*Description: program that prints the first 50 Fibonacci numbers
*
*Return: Always (0) success
*/

int main(void)
{
int n;
long x = 0, y = 1, sum;
for (n = 0; n < 50; n++)
{
sum = x + y;
printf("%ld", sum);
x = y;
y = sum;
if (n == 49)
{
	printf("\n");
}
else
printf(", ");
}
return (0);
}
