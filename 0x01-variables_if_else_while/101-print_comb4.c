#include <stdio.h>

/**
*main-Entry point
*
*Description: A C program print combination numbers
*
*Return: Always 0 (success)
*/

int main(void)
{
int n1 = 0, n2, n3;
while (n1 <= 9)
{
n2 = 0;
while (n2 <= 9)
{
n3 = 0;
while (n3 <= 9)
{
if (n1 != n2 && n1 < n2 && n2 != n3 && n2 < n3)
{
putchar(n1 + '0');
putchar(n2 + '0');
putchar(n3 + '0');
if (n1 + n2 + n3 != 24)
{
putchar(',');
putchar(' ');
}
}
n3++;
}
n2++;
}
n1++;
}
putchar('\n');
return (0);
}
