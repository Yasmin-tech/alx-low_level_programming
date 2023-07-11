#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that returns a pointer
 *	to a newly allocated space in memory
 *Discription: The pointer contains a copy of the string
 *	given as a parameter
 *@str: a charcter pointer
 *
 * Return: a poinert to a new allocated memory space,
 *		caontaing a duplicate of str
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int len;
	char *p;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	p = (char *)malloc(len);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len - 1; i++)
		p[i] = str[i];

	p[i] = '\0';

	return (p);
}
