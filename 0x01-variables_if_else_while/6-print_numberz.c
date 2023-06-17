#include <stdio.h>

/**
*main-Enrty point
*
*Description: A C program print numbers
*
*Return:Always 0 (success)
*/

int main(void)
{
int n = 0;
while (n < 10)
{
putchar(n + '0');
n++;
}
putchar('\n');
return (0);
}
