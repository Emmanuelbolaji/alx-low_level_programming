#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - Calculates sum of all data in a linked list.
 * @head: pointer to head of the linked list.
 *
 * Return: The sum of all data in linked list. If the list is empty, return 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
