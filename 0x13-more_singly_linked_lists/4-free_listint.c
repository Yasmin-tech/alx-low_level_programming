#include "lists.h"

/**
 * free_listint - free the memory allocated dynamiclly for a singly-linked list
 *
 *@head: a pointer to the first element in the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *prev;

	ptr = head;

	if (ptr == NULL)
		return;

	while (ptr != NULL)
	{
		prev = ptr;
		ptr = ptr->next;
		free(prev);
	}
}
