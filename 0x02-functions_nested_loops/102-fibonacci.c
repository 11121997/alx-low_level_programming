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
int x, y, z, n;
for (x = 1; x <= 50; x++)
{
for (y = 2; y <= 50; y++)
z = x + y;
n = z + x;
}
printf("%d, \n", n);
return (0);
}
