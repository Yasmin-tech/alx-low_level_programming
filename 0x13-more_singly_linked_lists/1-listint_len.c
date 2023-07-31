#include "lists.h"

/**
 * listint_len - count the number of the nodes
 *@h: the head of the singly-linked list
 *
 * Return: the number of nodes
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (counter);

	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}

	return (counter);
}
