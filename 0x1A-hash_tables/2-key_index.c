#include "hash_tables.h"

/**
 * key_index - a function that generates the index of a key.
 *@key: the key as string
 *@size: the size of the array of the hash table
 *
 * Return: the index that represente the key in the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
