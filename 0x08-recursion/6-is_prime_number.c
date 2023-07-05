#include "main.h"
/**
*is_prime_number - function that checks is n prime
*@n: int
*@othern: int
*Return: int
*/

int check_prime(int n, int othern);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
*check_prime - function check if number is prime or not
*@n: int
*@othern: int
*Return: int
*/

int check_prime(int n, int othern)
{
	if (othern >= n && n > 1)
		return (1);
	else if (n % othern == 0 || n < 1)
		return (0);
	else
		return (check_prime(n, othern));
}
