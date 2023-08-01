#include "lists.h"

/**
 * free_listint2 - free the memory allocated dynamiclly for singly-linked list
 *	and set head to NULL
 *
 *@head: a pointer to the head pointer of the first element in the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *prev;


	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
		prev = NULL;
	}

	*head = NULL;
	head = NULL;
}
