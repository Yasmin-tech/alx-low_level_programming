#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: the character to check
 *
 * Return: (1) if c is uppercase or (0) otherwise
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
