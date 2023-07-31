#include "lists.h"

/**
 * pop_listint - removes the first element in a singly-linked list
 *@head: a pointet to the adress of the pointer to the first element
 *
 * Return: the value of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *removed;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	removed = *head;
	*head = removed->next;
	data = removed->n;
	free(removed);
	removed = NULL;
	return (data);
}
