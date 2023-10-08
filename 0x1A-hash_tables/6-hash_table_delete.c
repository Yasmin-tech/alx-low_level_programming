#include "hash_tables.h"

/**
 * hash_table_delete -  a function that deletes a hash table.
 *@ht: is the hash table you want to delete
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item, *prev;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{

		item = ht->array[i];
		while (item)
		{
			free(item->key);
			free(item->value);
			prev = item;
			item = item->next;
			free(prev);
			prev = NULL;
		}
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
