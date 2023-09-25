#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees listint_t list
 * @head: pointer to the head of the list.
 * Description: function frees all the nodes in listint_t list.
 */

void free_listint(listint_t *head)
{
	listint_t *cur;
	
	while (head != NULL)
	{
		cur = head;
		head = head->next;
		free(cur);
	}
}
