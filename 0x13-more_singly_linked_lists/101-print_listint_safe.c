#include "lists.h"

/**
 * has_cycle - a function that checks if there is a loop
 *	in listint_t linked list
 *@head: a pointer to the first node
 *
 * Return: the entry point of the loop
 */

const listint_t *has_cycle(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
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
 * print_listint_safe - a function that prints a listint_t linked list
 *@head: a pointer to the first node
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	int flag = 0;
	const listint_t *ptr, *curr;

	if (head == NULL)
		return (counter);

	ptr = has_cycle(head);
	if (ptr == NULL)
	{
		curr = head;
		while (curr != NULL)
		{
			printf("[%p] %d\n", (void *)curr, curr->n);
			counter++;
			curr = curr->next;
		}
		return (counter);
	}
	else
	{
		curr = head;

		while (flag < 2)
		{
			if (curr == ptr)
				flag++;

			if (flag < 2)
			{
				printf("[%p] %d\n", (void *)curr, curr->n);
				counter++;
				curr = curr->next;
			}
		}
		printf("-> [%p] %d\n", (void *)ptr, ptr->n);
		return (counter);
	}
}

