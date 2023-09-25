#include <stddef.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in linked list
 * @h: arguement h
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t start = 0;

	for (; h != NULL; h = h->next)
	{
		++start;
	}
	return (start);
}
