#include "main.h"

/**
 * factorial - returns factorial of a given num
 * @n: integer factorial to be returned
 * Return: if n is < than 0 return -1 0 if otherwise
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
