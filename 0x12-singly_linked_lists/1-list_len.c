#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - a function that return the number of elements in a linked list
 *@h: the head pointer
 *
 * Return: the number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;
	const list_t *p = h;

	if (h == NULL)
		return (counter);

	while (p != NULL)
	{
		counter++;
		p = p->next;
	}

	return (counter);
}
