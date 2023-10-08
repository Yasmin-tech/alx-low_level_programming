#include "hash_tables.h"


/**
 * hash_table_get - a function that retrieves a value associated with a key.
 *@ht: is the hash table you want to look into
 *@key: is the key you are looking for
 *
 * Return: the value associated with the element,
 *	or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* get the index of the key */
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		ptr = ht->array[index];

		while (ptr)
		{
			if (strcmp(key, ptr->key) == 0)
				return (ptr->value);
			ptr = ptr->next;
		}
	}

	/* ht->array[index] == NULL Or Not Found*/
	return (NULL);

}
