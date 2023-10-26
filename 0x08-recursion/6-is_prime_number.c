#include <stdio.h>
/**
 * is_prime_recurse - recursive helper function
 * @n: the integer to be checked
 * @divisor: current divisor been tested
 * Return: 1 if n is prime number 0 if else
 */

int is_prime_recurse(int n, int divisor)
{
	if (n < 2)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recurse(n, divisor  + 1));
}

/**
 * is_prime_number - function of the code
 * @n: number to be checked
 * Return: 1 if it is prime number 0 if not
 */

int is_prime_number(int n)
{
	return (is_prime_recurse(n, 2));
}
