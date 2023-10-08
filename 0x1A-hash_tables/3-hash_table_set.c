#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 *
 *Discreption: add a node of type hash_node_t to the array contained in
 *	the hash table struct, if this spot is NULL the (key, value) is
 *	added immediately, in case of collision, the new node is added
 *	as the head in the linked list, if the key already exists
 *	its value will be updated
 *@ht: is the hash table you want to add or update the key/value to
 *@key: is the key. key can not be an empty string
 *@value: is the value associated with the key. value must be duplicated.
 *	value can be an empty string
 *
 * Return: Returns: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_item, **array, *ptr;
	char *new_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	array = ht->array;
	ptr = array[index];
	new_value = strdup(value);

	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = new_value;
			return (1);
		}
		ptr = ptr->next;
	}
	new_item = malloc(sizeof(hash_node_t));

	if (new_item == NULL)
	{
		free(new_value);
		return (0);
	}
	new_item->key = strdup(key);
	if (new_item->key == NULL)
	{
		free(new_item);
		free(new_value);
		return (0);
	}
	new_item->value = new_value;
	new_item->next = array[index];
	array[index] = new_item;
	return (1);
}
