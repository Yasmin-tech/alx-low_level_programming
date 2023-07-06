#include "main.h"

/**
 * wildcmp - compares string that contains '*'
 *	if the strings can be considered identical
 *@s1: a pointer to a character
 *@s2: a pointer that a string that contains '*'
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (*(s2 + 1) != '\0' && *s1 == '\0')
			return (0);

		if (wildcmp(s1, s2 + 1))
			return (1);

		return (wildcmp(s1 + 1, s2));
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
