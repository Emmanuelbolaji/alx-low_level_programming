#include "main.h"
#include <stdio.h>

/**
 * print_array - print a number of array
 * @a: int pointer
 * @n: number of array
 */

void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		printf("%d", a[l]);

		if (l != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
