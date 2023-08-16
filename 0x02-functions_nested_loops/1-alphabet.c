#include "main.h"

/**
 * main - Print all the alphabet from a to z in lower case
 * Return: always void
 */

void print_alphabet(void)
{
	char let;
	for(let = 'a'; let <= 'z'; let++)
	{
		_putchar("%c", let);
	}
	_putchar("\n");
}
