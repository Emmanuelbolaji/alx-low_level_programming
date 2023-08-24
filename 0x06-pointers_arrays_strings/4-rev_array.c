#include "main.h"

/**
 * reverse_array - function that reverses an array
 * @a: pointer to array
 * @n: no of element in array
 */

void reverse_array(int *a, int n)
{
	int b = 0, mod;

	n = n - 1;

	for (b = 0; b < n; b++)
	{
	mod = a[b];
		a[b] = a[n];
		a[n] = mod;
		n--;
	}
}
