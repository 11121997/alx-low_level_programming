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
while (n < 10)
{
putchar(n + '0');
putchar(',');
putchar(' ');
n++;
}
putchar(',');
return (0);
}

