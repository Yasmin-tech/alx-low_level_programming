#include "lists.h"

/**
 * print_listint - printing the values of the nodes
 *@h: the head of the singly-linked list
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (counter);

	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (counter);
}
