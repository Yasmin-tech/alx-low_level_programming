#include "lists.h"

/**
 * free_listint2 - free the memory allocated dynamiclly for singly-linked list
 *	and set head to NULL
 *
 *@head: a pointer to the head pointer of the first element in the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *prev;

	ptr = *head;

	if (head == NULL || ptr == NULL)
		return;

	while (ptr != NULL)
	{
		prev = ptr;
		ptr = ptr->next;
		free(prev);
		prev = NULL;
	}

	*head = NULL;
}
