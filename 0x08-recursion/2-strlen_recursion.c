#include "main.h"

/**
 * _strlen_recursion - print the length of the sting using recrsion
 *@s: a pointer to a string
 *
 * Return: int , the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(++s));
}

