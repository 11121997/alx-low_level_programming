#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - program that generates random valid passwords
*Return: Always 0 (success)
*/

int main(void)
{
	int sum;
	char c;
	
	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(sum - 2772);
	return (0);
}
