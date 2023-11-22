#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - count number of elements
 * @h: head pointer
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
