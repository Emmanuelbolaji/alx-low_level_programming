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
	listint_t *tem = *head;
	int dat = tem->n;
if (*head == NULL)
{
return (0);
}

*head = (*head)->next;
free(tem);

return (dat);
}
