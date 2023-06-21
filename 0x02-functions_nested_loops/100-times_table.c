#include "main.h"

void _printf(int i, int j);

/**
 * print_times_table-  a  function that prints
 * the n times table, starting with 0.
 * @n: numbers of time
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, res = 0;

	if (n < 0 || n > 15)
	{
		return;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if ((res / 10) < 1)
				{
					_putchar(((res % 10) + '0'));
				}
				else if ((res / 10) < 10)
				{
					_putchar(((res / 10) + '0'));
					_putchar(((res % 10) + '0'));
				}
				else
				{
					_putchar(res / 100 + '0');
					_putchar(res / 10 % 10 + '0');
					_putchar(res % 10 + '0');
				}

				if (j != n)
					_printf(i, j);

			}
			_putchar('\n');
		}
	}
}

/**
 * _printf-  a  function to format the table output
 * @i: row number
 * @j: col number
 *
 * Return: void
 */

void _printf(int i, int j)
{
	int result = 0;

	_putchar(',');
	_putchar(' ');
	result = i * (j + 1) / 10;
	if (result < 1)
	{
		_putchar(' ');
		_putchar(' ');
	}
	if (result >= 1 && result < 10)
	{
	_putchar(' ');
	}
}
