#include "main.h"

/**
 * times_table-  a  function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, j, res = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if ((res / 10) < 1)
			{
				_putchar(((res % 10) + '0'));
			}
			else
			{
				_putchar(((res / 10) + '0'));
				_putchar(((res % 10) + '0'));
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (((i * (j + 1)) / 10) < 1)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
