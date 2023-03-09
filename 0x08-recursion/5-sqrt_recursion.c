#include "main.h"

/**
 * find_sqrt - Finds the natural square root of a number
 * using binary search.
 *
 * @n: The number to find the square root of.
 * @low: The lowest possible value for the square root.
 * @high: The highest possible value for the square root.
 *
 * Return: The natural square root of n. If n does not have a
 * natural square root, returns -1.
 */
int find_sqrt(int n, int low, int high)
{
	int mid;

	if (low > high)
	{
		return (-1);
	}


	mid = (low + high) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (find_sqrt(n, mid + 1, high));
	}
	else
	{
		return (find_sqrt(n, low, mid - 1));
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n. If n does not have a
 * natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 1, n));
	}
}
