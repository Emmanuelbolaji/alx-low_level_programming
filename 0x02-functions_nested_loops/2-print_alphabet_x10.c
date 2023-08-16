#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char let;
	int it;

	for (it = 0; it < 10; it++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
		_putchar('\n');
	}
}
