#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node at a given position
 *@head: the adreess of the pointer to the first node
 *@index: the index where the node should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *to_remove;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	ptr = *head;

	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	i = 1;
	while (ptr->next != NULL)
	{
		if (i == index)
		{
			to_remove = ptr->next;
			ptr->next = to_remove->next;
			free(to_remove);
			to_remove = NULL;
			return (1);
		}
		ptr = ptr->next;
		i++;
	}
	return (-1);
}
