#include "lists.h"

/**
 * sum_listint - a function that returns the sum of
 *	all the data (n) of a listint_t linked list
 *@head: a pointer to the first node in the list
 *
 * Return: sum of the data in all nodes or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (sum);

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
