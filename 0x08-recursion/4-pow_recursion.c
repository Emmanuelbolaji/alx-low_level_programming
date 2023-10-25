#include <stdio.h>

/**
 * _pow_recursion - function that returns value of x raised to power of y
 * @x: value to be recieved
 * @y: value will be raised to the power of x
 * Return: 0 on success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
