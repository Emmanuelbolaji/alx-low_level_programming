#include "main.h"

/**
 * square_root - function
 * @x: arguement
 * @y: arguement
 * Return: square root
 */

int square_root(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (square_root(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: inputed number
 * Return: If n doesn't a natural square root function returns -1
 */


int _sqrt_recursion(int n)
{
	return (square_root(n, 0));
}
