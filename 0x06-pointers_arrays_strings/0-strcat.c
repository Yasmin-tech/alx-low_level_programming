#include "main.h"

int _strlen(char *s);

/**
 * _strcat - a function to concatinate two string 
 *@dest: the string concatenated to be return
 *@src: the first string to be appended to the end of dest
 * 
 * Return: char *
 */

char * _strcat(char *dest, char *src)
{
	int i, len_dest = _strlen(dest);

	i = len_dest;
	for (; *src != '\0'; src++)
	{
		dest[i] = *src;
		i++;
	}

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
