#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node at given position in linked list.
 * @head: pointer to a pointer to the head of the linked list.
 * @idx: The index at which the new node should be added.
 * @n: The data integer to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *t;
	unsigned int a;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0 || *head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	t = *head;
	for (a = 0; a < idx - 1 && t != NULL; a++)
	{
		t = t->next;
	}
	if (t == NULL)
		free(new_node);
	return (NULL);

	new_node->next = t->next;
	t->next = new_node;

	return (new_node);
}
