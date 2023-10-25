#include <stdio.h>

/**
 * find_sqrt - function to find square root
 * @n: number that it's square root would be found
 * @x: used to check if a number is the square root of n
 * Return: recursive function
 */

int find_sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (find_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - function that returns natural square root of a number
 * @n: number that it's square root would be found
 * Return: recursive function
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (find_sqrt(n, 1));
}
