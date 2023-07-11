#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings
 *Description: the function takes two charcter pointer and 
 *	alocate a new memory space that contains the two
 *	string concatenated
 *@s1: a character pointer to the first string
 *@s2: a character pointer to the second string
 *
 * Return: a pointer to the new concatunated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len_s1, len_s2;
	char *p;

	if (s1 == NULL)
		len_s1 = 0;
	else
		len_s1 = strlen(s1);

	if (s2 == NULL)
		len_s2 = 0;
	else
		len_s2 = strlen(s2);

	p = (char *)malloc(len_s1 + len_s2 + 1);

	if (p == NULL)
		return (NULL);

	i = 0;
	if (s1 != NULL)
	{
		for (; i < len_s1; i++)
			p[i] = s1[i];
	}

	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			p[i] = s2[j];
			i++;
		}
	}
	p[i] = '\0';

	return (p);
}
