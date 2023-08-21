#include "main.h"

/**
 * swap_int - function swaps two int
 * @a: 1st pointer
 * @b: 2nd pointer
 * Return: (0)
 */

void swap_int(int *a, int *b)
{
	int nothing;
	int *c = &nothing;

	*c = *a;
	*a = *b;
	*b = *c;
}
