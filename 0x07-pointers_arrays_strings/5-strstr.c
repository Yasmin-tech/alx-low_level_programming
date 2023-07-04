#include <stddef.h>

/**
 * _strstr - find substring
 *@haystack: a string pointer to look for another string
 * occures in sequintial order
 *@needle: the substring to  be looked for
 *
 * Return: char * pointer to haystack where needle first occurese
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2 = needle;
	int matches = 0;

	for (p1 = haystack; *p1; p1++)
	{

		if (*p1 == *p2)
		{

			p2++;
			if (*p2 == '\0')
				break;
			matches++;
		}
		else
		{
			p2 = needle;
			matches = 0;
		}
	}

	if (matches)
	{
		p1 -= matches;
		return (p1);
	}
	else
	{
		return (NULL);
	}
}
