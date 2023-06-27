#include "main.h"

/**
 * puts_half - a function that prints the second half string
 * @str: string pointer
 *
 * Return: void
 */

void puts_half(char *str)
{

	char *s = str;
	int len = 0, fir_index, las_index, i;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	las_index = len - 1;
	fir_index = (las_index / 2) + 1;

	i = 0;
	while (i < fir_index)
	{

		str++;
		i++;
	}

	/*i = i - 1;*/
	while (i <= las_index)
	{
		_putchar(*str);
		i++;
		str++;
	}

	_putchar('\n');
}

