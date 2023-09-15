#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @array: arguement function 1
 * @size: arguement function 2
 * @cmp: arguement 3
 * Return: returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	return (-1);
}

/**
 * compare_to_5 - function name
 * @value: function arguement
 * Return: value -5
 */

int compare_to_5(int value)
{
	return (value - 5);
}
