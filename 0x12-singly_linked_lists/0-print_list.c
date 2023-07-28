#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - a function to print the data in a liked list
 *@h: the head pointer
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *p = h;

	if (h == NULL)
		return (counter);

	while (p != NULL)
	{
		counter++;
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);
		p = p->next;
	}

	return (counter);
}
