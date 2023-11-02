#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range -  function that creates an array of integers
 * @min: the minimum integer of the array
 * @max: the maximum integer of the array
 * Return: return NULL on failure pointer on success
 */

int *array_range(int min, int max)
{
	int i;
	int size = max - min + 1;
	int *arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	if (min > max)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + 1;
	}

	return (arr);
}
