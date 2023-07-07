#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string pointer
 *
 * Return: void
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		/*ch = *str;*/
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
