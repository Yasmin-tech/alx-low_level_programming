#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 *@nmemb: the number of elements in the array
 *@size: the size/ data type of the elements
 *
 * Return: a void pointer to the newly allocated space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned char *pp;
	unsigned int len;

	if (!nmemb || !size)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	pp = p;
	while (len--)
	{
		*pp++ = (unsigned char) 0;
	}

	return (p);
}
