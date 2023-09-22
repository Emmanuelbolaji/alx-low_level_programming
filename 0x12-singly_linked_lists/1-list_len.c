#include <stddef.h>
#include "lists.h"

/**
 * list_len - a function that returns the no of elements in linked list
 * @h: function arguement
 * Return: returns no of elements
 */

size_t list_len(const list_t *h)
{
	size_t start = 0;

	for (; h != NULL; h = h->next)
	{
		++start;
	}
	return (start);
}
