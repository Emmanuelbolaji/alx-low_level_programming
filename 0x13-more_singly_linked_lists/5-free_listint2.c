#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: double pointer to head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *now = *head;
	listint_t *next;

	while (now != NULL)
	{
		next = now->next;
		free(now);
		now = next;
	}

	*head = (NULL);
}
