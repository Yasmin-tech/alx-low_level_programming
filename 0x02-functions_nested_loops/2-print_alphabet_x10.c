#include "main.h"

/**
 * print_alphabet_x10 - a program that prints  the alphabet,
 *	in lowercase, followed by a new line 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 1;

	while (i <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
		i++;
	}
}
