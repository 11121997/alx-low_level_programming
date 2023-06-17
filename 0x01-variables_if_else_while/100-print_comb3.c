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
while (n1 <= 9 && n2 <= 9)
{
putchar(n1 + '0');
n1++;
putchar(n2 + '0');
n2++;
if (n1 == n2 && n1 > n2)
break;
if (n1 + n2 != 17)
break;
}
putchar(',');
putchar(' ');
putchar('\n');
return (0);
}
