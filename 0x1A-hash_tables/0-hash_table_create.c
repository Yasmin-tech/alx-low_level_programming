# include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table structure
 *@size: the size of the array that will contains the pointer to hash nodes
 *
 * Return: a pointer to the hash_table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	table->array = calloc(size, sizeof(hash_node_t *));

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
