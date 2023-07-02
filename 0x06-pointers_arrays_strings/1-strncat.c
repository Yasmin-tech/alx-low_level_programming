#include "main.h"

int _strlen(char *s);

/**
 * _strncat - a function to concatinate two string
 *@dest: the string concatenated to be return
 *@src: the first string to be appended to the end of dest
 *@n: numbers of characters frim src to append to dest
 *
 * Return: char *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, last_index;
	int len_dest = _strlen(dest);
	int len_src = _strlen(src);

	if (len_src >= n)
	{
		last_index = n;
	}
	else
	{
		last_index = len_src;
	}

	i = len_dest;
	for (j = 0; j < last_index; j++)
	{
		dest[i] = *src;
		src++;
		i++;
	}

	/* according to strcat() and strncat functions dest should always be null terminated*/
	/* this shoud be dest[i] = '\0';*/
	if (last_index == len_src)
		dest[i] = '\0';


	return (dest);
}

/**
 * _strlen - a function to concatinate two string
 *@s: the string pointer
 *
 * Return: int string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
