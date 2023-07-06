#include "main.h"
#include <stdio.h>

/**
*is_prime_number - function that checks is n prime
*@n: int
*@i: int
*Return: int value
*/

int check_prime(int n, int i);
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
*check_prime - function check if number is prime or not
*@n: int
*@i: int
*Return: 1 for prime or 0 otherwise
*/

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
