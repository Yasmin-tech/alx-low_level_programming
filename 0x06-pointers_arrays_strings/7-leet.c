#include "main.h"

/**
 * leet - encode string 1337
 *@str: string pointer
 *
 * Return: char *
 */

char *leet(char *str)
{
	char *s = str;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};
	int i = 0;

	while (*s != '\0')
	{
		for (i = 0; i < 5 ; i++)
		{
			if (*s == a[i] || *s == a[i] - 32)
			{
				*s = n[i] + '0';
			}
		}
		s++;
	}

	return (str);
}

