#include <stdio.h>

/**
*main-Entry point
*
*Description: A C program prints combination numbers
*
*Return: Always 0 (success)
*/

int main(void)
{
int n1 = 0, n2 = 1;
while (n1 <= 9)
{
while (n2<=9)
if (n1 == n2 && n1 > n2)
n1++;
n2++;
putchar(n1 + '0');
putchar(n2 + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
