#include "main.h"

/**
 * _puts_recursion - print a string recursivly
 *@s: a pointer to charcter
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
