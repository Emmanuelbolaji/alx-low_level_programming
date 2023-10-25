#include <stdio.h>

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: string to be printed in reverse
 * return: notthing when string get to null 0 on success
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}