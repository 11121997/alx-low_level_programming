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
int n1 = 0, n2 = 1;
while (n1 < 9)
{
while (n2 < 10)
{
if (n2 > n1 || n1 != n2)
{
putchar(n1 + '0');
putchar(n2 + '0');
}
if (n1 + n2 != 17)
break;
putchar(',');
putchar(' ');
n2++;
}
n1++;
}
putchar('\n');
return (0);
}