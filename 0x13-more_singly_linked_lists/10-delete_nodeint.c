#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index in a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: The index of the node to be deleted (starting at 0).
 *
 * Return: 1 if the node is successfully deleted, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *tp;
	listint_t *node;

	tp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (a = 0; a < index - 1 && tp != NULL && index != 0; a++)
		tp = tp->next;
	if (tp == NULL)
		return (-1);
	if (index == 0)
	{
		node = tp->next;
		free(tp);
		*head = node;
	}
	else
	{
		if (tp->next == NULL)
			node = tp->next;
		else
			node = tp->next->next;
		free(tp->next);
		tp->next = node;
	}
	return (1);
}
