#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocate memory for an array and set it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size in bytes of each element.
 * Return: A pointer to the allocated memory, or NULL if malloc fails
 *         or if nmemb or size is 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t full_size = (size_t)nmemb * size;
	void *ptr = malloc(full_size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, full_size);

	return (ptr);
}
