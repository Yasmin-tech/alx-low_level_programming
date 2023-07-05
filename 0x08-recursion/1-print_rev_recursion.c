#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print a string in reverse using recursion
 *@s: a pointer to a charcter
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	int curr_len;

	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(++s);
		s--;
		curr_len = strlen(s);
		if (curr_len <= len)
			_putchar(*s);
	}
}
