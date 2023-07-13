#include <stdlib.h>

/**
 * array_range - create an array of integers of a cetain range
 *@min: the start of the range(included)
 *@max: the end of the range(inclided)
 *
 * Return: a pointer to the array of integers
 */

int *array_range(int min, int max)
{
	int *p;
	unsigned int i;
	unsigned int len;

	if (min > max)
		return (NULL);
	len = max - min + 1;

	p = malloc(sizeof(*p) * len);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		p[i] = min + i;
	}

	return (p);
}
