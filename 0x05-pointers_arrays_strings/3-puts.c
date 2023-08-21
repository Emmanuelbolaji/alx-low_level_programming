#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: prints string
 */

void _puts(char *str)
{
	int d;

	for (d = 0; str[0] != '\0'; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
