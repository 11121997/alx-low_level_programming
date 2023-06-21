#include "main.h"
/**
*main - Entry point
*
*Description:  a program that computes and prints the sum of all the multiples
*
*Return: Always 0 (success)
*/

int main(void)
{
int num, sum;
for (num = 0; num <= 1024; num++)
{
if (num % 3 == 0 || num % 5 == 0)
sum += num;
}
printf("%d\n", sum);
return (0);
}
