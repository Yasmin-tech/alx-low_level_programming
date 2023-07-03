#include "main.h"

/**
 * _memcpy - copy memory area to another area
 *@dest: some memory area pointer
 *@src: memory area to copy from
 *@n: numbers of elemnts copied
 *
 * Return: char *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
