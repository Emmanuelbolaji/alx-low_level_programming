#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function prints elements of a listint_t list
 * @h: pointer to the head of the node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
