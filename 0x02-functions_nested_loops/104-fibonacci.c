#include <stdio.h>
#define LARGEST 10000000000
/**
*main - Entry point
*
*Description: program that finds and prints the first 98 Fibonacci numbers
*
*Return: Always 0 (success)
*/
int main(void)
{
int n;
unsigned long int f1 = 0, b1 = 1, f2 = 0, b2 = 2;
unsigned long int sum1, sum2, sum3;
printf("%lu, %lu, ", b1, b2);
for (n = 2; n < 98; n++)
{
if (b1 + b2 > LARGEST || f2 > 0 || f1 > 0)
{
sum1 = (b1 + b2) / LARGEST;
sum2 = (b1 + b2) % LARGEST;
sum3 = f1 + f2 + sum1;
f1 = f2;
f2 = sum3;
b1 = b2;
b2 = sum2;
printf("%lu%010lu", f2, b2);
}
else
{
sum2 = b1 + b2;
b1 = b2;
b2 = sum2;
printf("%lu", b2);
}
if (n != 98)
printf(", ");
}
printf("\n");
return (0);
}
