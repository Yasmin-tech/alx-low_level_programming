#include "main.h"

/**
 * print_most_numbers - print digits (0 to 9) except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 4 || num == 2)
		{
			continue;
		}
		_putchar(num + '0');
	}
	_putchar('\n');
}

