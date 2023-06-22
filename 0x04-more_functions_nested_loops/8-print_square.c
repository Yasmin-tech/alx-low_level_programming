#include "main.h"

/**
 * print_square - print '#' on shape of a square
 *@n: the number of # in the square
 *
 * Return: void
 */

void print_square(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
