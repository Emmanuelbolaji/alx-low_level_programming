#include <stdio.h>

/**
 * array_iterator -  a function that executes a function
 * @array: arguement`
 * @size: arguement 1
 * @action: arguement 2
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

/**
 * print_element - function arguement
 * @element: arguement 1
 */

void print_element(int element)
{
	printf("%d ", element);
}
