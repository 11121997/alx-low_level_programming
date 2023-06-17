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
int n = 0;
while (n <= 9)
{
if (n == 9)
{
break;
}
putchar(n + '0');
putchar(',');
putchar(' ');
n++;
}
putchar('\n');
return (0);
}

