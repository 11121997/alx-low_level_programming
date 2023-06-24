#include <stdio.h>

/**
*main - Entry point
*
*Description: program that prints the numbers from 1 to 100
*
*Return: Always 0 (success)
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
		{
			printf("Fizz \n");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz \n");
		}
		else if (((n % 3) == 0) && ((n % 5) == 0))
		{
			printf("FizzBuzz \n");
		}
		else
			printf("%d \n", n);
	}
	return (0);
}
