#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @array: array of integer
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
