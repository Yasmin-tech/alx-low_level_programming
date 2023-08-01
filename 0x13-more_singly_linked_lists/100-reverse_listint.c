#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 *@head: the adreess of the pointer to the first node
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *p;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = (*head)->next;
	(*head)->next = NULL;
	p = temp;

	while (p != NULL)
	{
		temp = temp->next;
		p->next = *head;
		*head = p;
		p = temp;
	}

	return (*head);
}
