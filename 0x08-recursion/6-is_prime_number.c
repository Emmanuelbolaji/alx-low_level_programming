#include <stdio.h>
/**
 * is_prime_number - function of the code
 * @n: number to be checked
 * Return: 1 if it is prime number 0 if not
 */


int is_prime_number(int n)
{
	int i;

	if (n < 2)
	{
		return (0);
	}
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
