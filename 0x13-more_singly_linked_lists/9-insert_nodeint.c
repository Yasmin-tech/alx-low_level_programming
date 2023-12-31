#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 *	at a given position
 *@head: the adreess of the pointer to the first node
 *@idx: the index where the new node should be inserted
 *@n: the value that node holds
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	ptr = *head;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	i = 1;
	while (ptr != NULL)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = ptr->next;
			ptr->next = new_node;
			return (new_node);
		}
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
