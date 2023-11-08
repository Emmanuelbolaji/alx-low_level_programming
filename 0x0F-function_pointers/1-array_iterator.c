#include <stddef.h>

/**
 * array_iterator - executes a function to each element of an array
 * @array: array of integers
 * @size: size of the array
 * @action: function pointer
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
