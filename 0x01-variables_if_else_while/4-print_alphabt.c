#include <stdio.h>
/**
*main-Entry point
*
*Description:A C program print alphabets
*
*Return: Always 0 (success)
*/

int main(void)
{
char ch = 'a';
while (ch <= 'z' || ch != 'e' || ch != 'q')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
