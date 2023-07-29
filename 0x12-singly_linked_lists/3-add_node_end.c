#include "lists.h"
#include <string.h>

/**
 * add_node_end - add a new node at the end of a linked list
 *@head: the adress of the pointer that points to the first node
 *@str: a charcter pointer to the string that should be in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *ptr = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

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
