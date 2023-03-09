#include "main.h"

/**
 * check_factors - helper function to recursively check for factors
 * @n: the integer to check
 * @i: the factor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_factors(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0 || n % (i + 2) == 0)
	{
		return (0);
	}

	return (check_factors(n, i + 6));
}

/**
 * is_prime_number - checks if a given integer is a prime number recursively
 * @n: the integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	return (check_factors(n, 5));
}
