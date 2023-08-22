#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: input to be reversed
 */

void print_rev(char *s)
{
	int b;

	b = 0;
	while (s[b] != '\0')
	{
		b++;
	}

	for (b--; b >= 0; b--)
	_putchar(s[b]);
	_putchar('\n');
}
