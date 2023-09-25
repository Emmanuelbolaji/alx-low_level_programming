#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of listint_t linked list.
 * @head: Pointer to head of list
 * @index: The index of the node to retrieve
 *
 * Return: Pointer to the nth node, or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *present = head;

	for (a = 0; present != NULL && a < index; a++)
	{
		present = present->next;
	}

	if (a == index)
	{
		return (present);
	}
	return (NULL);
}
