#include "hash_tables.h"

/**
 * hash_table_print -  a function that prints a hash table.
 *@ht: is the hash table you want to look into
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i, flag = 0;
	hash_node_t **array, *ptr;

	if (ht == NULL)
		return;

	array = ht->array;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (array[i] != NULL)
		{
			if (flag)
				printf(", ");
			ptr = array[i];

			while (ptr)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;

				if (ptr)
					printf(", ");
			}

			flag = 1;
		}
	}
	printf("}\n");
}
