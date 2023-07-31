#include "lists.h"

/**
 * add_nodeint - add a node that have value int
 *	to the beginging of the singly-linked list
 *@head: the adreess of the head of list
 *@n: the value to be added
 *
 * Return: the newly created node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
