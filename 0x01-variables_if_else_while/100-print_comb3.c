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
int n1, n2;
for (n1 = 0; n1 < 9; n1++)
{
for (n2 = 1; n2 < 10; n2++)
{
if (n1 < n2 || n1 != n2)
{
putchar(n1 + '0');
putchar(n2 + '0');
if (n1 + n2 != 17)
break;
}
}
}
putchar(',');
putchar(' ');
putchar('\n');
return (0);
}
