#include "lists.h"

/**
 * get_dnodeint_at_index - a function that return a node at the givin index
 *@head: a pointer to the head of th list
 *@index: the position of the node to be returned
 *
 * Return: on Success, the node at index , if the node does not exist,
 *	return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;

	while (i != index)
	{
		if (!ptr)
			break;
		ptr = ptr->next;
		i++;
	}
	if (i == index)
		return (ptr);
	else
		return (NULL);
}
