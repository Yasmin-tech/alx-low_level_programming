#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 *	and initializes it with a specific char
 *@size: the size to be allocated for the array
 *@c: the character to initilalize the char array with
 *
 * Return: a pointer to first character in the allocated memory
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (!size)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}

	return (arr);
}
