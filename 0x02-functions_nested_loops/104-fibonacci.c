#include <stdio.h>

/**
*main - Entry point
*
*Description: prints the first 98 Fibonacci numbers
*
*Return: Always 0 (success)
*/

int main(void)
{
int n;
long x = 0, y = 1, sum;
for (n = 0; n < 98; n++)
{
sum = x + y;
printf("%ld", sum);
x = y;
y = sum;
if (sum == 97)
{
printf("\n");
}
else
printf(", ");
}
return (0);
}
