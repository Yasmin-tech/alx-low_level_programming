#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 *@head: a pointer to the first node
 *
 * Return: The address of the node where the loop starts,
 *	or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;
	int is_met = 0;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			is_met = 1;
			break;
		}
	}

	if (is_met == 0)
	{
		return (NULL);
	}
	else
	{
		slow = head;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}
		return (slow);
	}
}

