#include "main.h"

/**
 * puts2 - a function that prints every other character
 * @str: string pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 2;; i++)
	{
		if (*str == '\0')
			break;
		if (i % 2 == 0)
		{
			_putchar(*str);

		}
		str++;
	}
	_putchar('\n');
}

