#include "main.h"

/**
 * _strncpy - copy string
 *@dest: a pointer to string that will hold the result
 *@src:  the source string pointer
 *@n: numbers of character to be copied
 *
 * Return: char *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	if (i < n)
		dest[i] = '\0';


	return (dest);
}
