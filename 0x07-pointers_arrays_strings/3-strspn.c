#include "main.h"

/**
 * _strspn - calculate bytes of a string litral
 *	contained in another string
 *@s: a string pointer to for character in
 *@accept: a string pointer to be looked for
 *
 * Return: unsigned int for number of charcter from
 *	accept conted entirly in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes_contained = 0;
	char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				bytes_contained++;
				break;
			}
		}
		if (!*p)
			break;
		s++;
	}

	return (bytes_contained);
}
