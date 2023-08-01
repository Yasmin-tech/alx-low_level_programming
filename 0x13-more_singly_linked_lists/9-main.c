#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    int len = 0;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    len = print_listint(head);
    printf("len = %d -----------------\n", len);
    insert_nodeint_at_index(&head, 10, 4096);
    len = print_listint(head);
    printf("len = %d -----------------\n", len);
    free_listint2(&head);
    return (0);
}
