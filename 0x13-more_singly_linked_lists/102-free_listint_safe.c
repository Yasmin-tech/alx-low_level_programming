#include "lists.h"

/**
 * has_loop - a function that checks if there is a loop
 *	in listint_t linked list
 *@head: a pointer to the first node
 *
 * Return: the entry point of the loop
 */

listint_t *has_loop(listint_t *head)
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

/**
 * free_listint_safe - a function that frees a listint_t lis
 *@h: the adress of the pointer to the first node
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	int flag = 0;
	listint_t *ptr, *to_free;

	if (h == NULL || *h == NULL)
		return (counter);

	ptr = has_loop(*h);
	if (ptr == NULL)
	{
		while (*h != NULL)
		{
			to_free = *h;
			*h = (*h)->next;
			free(to_free);
			to_free = NULL;
			counter++;
		}
		*h = NULL;
		return (counter);
	}
	else
	{
		while (flag < 2)
		{
			if (*h == ptr)
				flag++;

			if (flag < 2)
			{
				to_free = *h;
				*h = (*h)->next;
				free(to_free);
				to_free = NULL;
				counter++;
			}
		}
		*h = NULL;
		return (counter);
	}
}

