#include <stdlib.h>

/**
 *malloc_checked - a function that allocates memory using malloc
 *@b: the number of bytes to allocate
 *
 * Return: Nothin
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	else
		return (p);
}
