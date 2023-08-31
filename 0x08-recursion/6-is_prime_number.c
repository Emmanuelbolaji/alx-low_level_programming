#include "main.h"

/**
 * prime_x - function
 * @x: arguement
 * @y: arguement
 * Return: prime
 */

int prime_x(int x, int y)
{
	if (x <= 1 || (x != y && x % y == 0))
	{
		return (0);
	}
	else if (x == y)
	{
		return (1);
	}
	return (prime_x(x, y + 1));
}

/**
 * is_prime_number - function hat detects prime no
 * @n: input number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (prime_x(n, 2));
}
