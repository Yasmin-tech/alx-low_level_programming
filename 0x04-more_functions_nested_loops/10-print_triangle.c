#include "main.h"

/**
 * print_triangle - print # in a shape of a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;
	int space = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			space--;
			for ( j = 1; j <= space; j++)
			{
				_putchar(' ');
			}
			for (k = j; k <= size; k++)
			{
				_putchar('#');
			}	
			
			_putchar('\n');
		}
	}

}
