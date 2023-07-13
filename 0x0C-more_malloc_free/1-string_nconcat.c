#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - a function that concatenates two strings
 *	using n numbers of bytes from the second string
 *@s1: a pointer to the first string
 *@s2: a pointer to the second string
 *@n: the number of bytes to concate from the second string
 *
 * Return: a pointer to the new location of the concatunated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, i;
	char *p;

	if (s1 == NULL)
	{
		len_s1 = 0;
	}
	else
	{
		len_s1 = strlen(s1);
	}

	if (s2 == NULL)
	{
		len_s2 = 0;
	}
	else
	{
		len_s2 = strlen(s2);
		if (len_s2 > n)
			len_s2 = n;
	}

	p = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		p[i] = s1[i];

	for (i = 0; i < len_s2; i++)
		p[len_s1 + i] = s2[i];

	p[len_s1 + i] = '\0';

	return (p);
}
