#include "main.h"

/**
 *string_toupper - convert to uppercase
 *@str: a string pointer
 *
 * Return: char *;
 */

char *string_toupper(char *str)
{
	char *str2 = str;

	while (*str2 != '\0')
	{
		if (*str2 >= 97 && *str2 <= 122)
			*str2 = *str2 - 32;
		str2++;
	}

	return (str);
}
