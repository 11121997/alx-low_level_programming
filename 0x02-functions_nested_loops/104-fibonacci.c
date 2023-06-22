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
long hx, fx, hy, fy;
long h1, h2;
for (n = 0; n < 92; n++)
{
sum = x + y;
printf("%ld", sum);
x = y;
y = sum;
}
hx = x / 10000000000;
hy = y / 10000000000;
fx = x % 10000000000;
fy = y % 10000000000;
for (n = 93; n < 99; n++)
{
h1 = hx + hy;
h2 = fx + fy;
if (fx + fy > 9999999999)
{
h1 += 1;
h2 %= 10000000000;
}
printf("%ld%ld", h1, h2);
if (n != 98)
printf(", ");
hx = hy;
fx = fy;
hy = h1;
fy = h2;
}
printf("\n");
return (0);
}
