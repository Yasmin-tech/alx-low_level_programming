#include "main.h"

/**
 * print_alphabet - a program that prints  the alphabet,
 *	in lowercase, followed by a new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
