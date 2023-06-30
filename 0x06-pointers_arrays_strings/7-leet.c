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

	while (*s != '\0')
	{
		if (*s == 'a' || *s == 'A')
			*s = '4';
		else if (*s == 'e' || *s == 'E')
			*s = '3';
		else if (*s == 'o' || *s == 'O')
			*s = '0';
		else if (*s == 't' || *s == 'T')
			*s = '7';
		else if (*s == 'l' || *s == 'L')
			*s = '1';
		s++;
	}

	return (str);
}

