#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - find any occurnace from a string
 *@s: a string pointer to find occurance in
 *@accept: a string pointer to look for charcter matching
 *
 * Return: char * the first occurnace of any byte from accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = accept; *p != '\0'; p++)
			if (*s == *p)
				break;
		if (*p)
			break;

		s++;
	}

	if (!*s)
		return (NULL);
	else
		return (s);
}
