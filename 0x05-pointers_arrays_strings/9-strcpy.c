#include "main.h"

/**
 * _strcpy - a function that copies array
 * @dest: char pointer
 * @src : the second char pointer
 *
 * Return: char *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; *src != '\0'; src++)
	{
		*(dest + i) = *src;
		i++;
	}

	*(dest + i) = *src;

	return (dest);
}
