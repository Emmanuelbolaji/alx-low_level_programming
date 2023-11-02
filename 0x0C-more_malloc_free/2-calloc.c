#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function allocates memory for an array using malloc
 * @nmemb: the array that memory will be allocated to
 * @size: the number of elements in the array
 * Return: NULL for failure pointer on success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t full_size = nmemb * size;
	void *ptr = malloc(full_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memset(ptr, 0, full_size);

	return (ptr);
}
