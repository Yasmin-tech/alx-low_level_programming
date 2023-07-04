#include "main.h"

/**
 * print_chessboard - print 8 * 8 chessboard
 *@a: a pointer to an array of 8 element or columns
 *
 * Return: void/ nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{

			_putchar(a[i][j]);

			if (!(j % 7) && j)
				_putchar('\n');

		}
	}
}
