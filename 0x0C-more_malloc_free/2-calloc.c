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
	char *d;
	size_t a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	d = malloc(nmemb * size);
	if (d == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		d[a] = 0;
	return (d);
}
