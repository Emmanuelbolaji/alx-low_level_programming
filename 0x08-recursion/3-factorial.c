#include <stdio.h>

/**
 * factorial -  a function that returns the factorial of a given number.
 * @n: number that the it's factorial will be printed
 * Return: the recursion and 0 on success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
