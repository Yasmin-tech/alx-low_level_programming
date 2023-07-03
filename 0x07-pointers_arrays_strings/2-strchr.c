#include "main.h"
#include <stddef.h>

/**
 * _strchr - find the first occurrence of the character
 *@s: a string pointer
 *@c: a charcter to look for
 *
 * Return: the pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			break;

		s++;
	}

	if (!(*s))
		return (NULL);
	return (s);
}
