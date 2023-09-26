#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes head node of listint_t linked list.
 * @head: Double pointer to the head of the list.
 * Return: The data of deleted head node, or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	int a;
	listint_t *tp;

	if (head == NULL || head == NULL)
		return (0);
	a = (*head)->n;
	tp = *head;
	*head = (*head)->next;
	free(tp);
	return (a);
}
