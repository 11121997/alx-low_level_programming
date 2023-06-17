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
while (n < 9)
{
putchar(n + '0');
putchar(',');
putchar(' ');
n++;
}
putchar('9'+'0');
return (0);
}

