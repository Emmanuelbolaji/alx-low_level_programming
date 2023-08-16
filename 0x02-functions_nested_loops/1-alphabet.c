#include "main.h"

/**
 * print_alphabet - Prints all the lowercase alphabets
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		_putchar(let);
	}
	_putchar('\n');
}
