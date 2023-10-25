#include <stdio.h>

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string that it's length will be printed
 * Return: 0 at null stage, recurse on success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
