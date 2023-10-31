#include <stdlib.h>

/**
 * create_array - function create array of chars,initializes with specific char
 * @size: the size of the array
 * @c: character to be used
 * Return: 0 on success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
