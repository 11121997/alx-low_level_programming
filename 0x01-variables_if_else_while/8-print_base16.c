#include <stdio.h>

/**
*main-Entry point
*
*Description: A C program print hexadecimal
*
*Return: Always 0 (success)
*/

int main(void)
{
int n = 0;
char ch = 'a';
while (n < 10)
{
putchar(n + '0');
n++;
}
while (ch <= 'f')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
