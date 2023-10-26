#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * is_palindrome_recurse - checks left and right boundary
 * @left: left boundary
 * @right: right boundary
 * Return: recursion
 */
bool is_palindrome_recurse(char *left, char *right)
{
	if (left >= right)
	{
		return (true);
	}
	if (*left != *right)
	{
		return (false);
	}
	return (is_palindrome_recurse(left + 1, right - 1));
}

/**
 * is_palindrome - function that returns 1 if string is palindrome 0 otherwise
 * @s: string to be checked
 * Return: Recursion
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
	{
		return (1);
	}
	return (is_palindrome_recurse(s, s + length - 1));
}
