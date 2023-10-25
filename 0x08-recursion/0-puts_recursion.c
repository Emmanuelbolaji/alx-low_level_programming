#include <stdio.h>
#include <unistd.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: the string to be printed
 * return: nothing at the end of the string and 0 on success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
