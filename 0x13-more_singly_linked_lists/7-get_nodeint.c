#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 *	of a listint_t linked list
 *@head: a pointer to the first element in the list
 *@index: the position of the node to be returned
 *
 * Return: the adreess of the element at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	ptr = head;
	i = 0;
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}

	return (NULL);
}
