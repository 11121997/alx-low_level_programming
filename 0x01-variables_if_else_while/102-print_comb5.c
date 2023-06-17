#include <stdio.h>

/**
*main-Entry point
*
*Description:A C program print number
*
*Return: Always 0 (success)
*/

int main(void)
{
int n1 = 0, n2;
while (n1 <= 99)
{
n2 = n1 + 1;
while (n2 <= 99)
{
if (n2 != n1)
{
putchar((n1 / 10) + '0');
putchar((n1 % 10) + '0');
putchar(' ');
putchar((n2 / 10) + '0');
putchar((n2 / 10) + '0');
if (n1 != 98 || n2 != 99)
{
putchar(',');
putchar(' ');
}
}
n2++;
}
n1++;
}
putchar('\n');
return (0);
}
