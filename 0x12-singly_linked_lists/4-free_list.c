#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 *@head: a pointer to the first node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *prev;

	if (head == NULL)
		return;

	while (ptr != NULL)
	{
		prev = ptr;
		ptr = ptr->next;

		free(prev->str);
		free(prev);
		prev = NULL;
	}



}
