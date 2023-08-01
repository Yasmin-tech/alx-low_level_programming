#include "lists.h"

/**
 * add_nodeint_end - add a node that have value int
 *	to the end of the singly-linked list
 *@head: the adreess of the head of list
 *@n: the value to be added
 *
 * Return: the newly created node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *ptr;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	ptr = *head;
	if (ptr == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}

	return (new_node);
}
