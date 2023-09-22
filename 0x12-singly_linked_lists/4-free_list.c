#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: arguement 1
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
