#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * make_new_node - creates new node
 * @n: data of new node
 * Return: pointer to node
 */

listint_t *make_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

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
	unsigned int a;
	listint_t *tp;
	listint_t *tp_old;
	listint_t *new_node;

	tp = *head;
	if (head == NULL)
		return (NULL);
	new_node = make_new_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
		*head = new_node;
	for (a = 0; a < idx - 1 && tp != NULL && idx != 0; a++)
		tp = tp->next;
	if (tp == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = tp;
	else
	{
		tp_old = tp->next;
		tp->next = new_node;
		new_node->next = tp_old;
	}
	return (new_node);
}

