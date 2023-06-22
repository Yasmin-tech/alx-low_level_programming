#include "main.h"

/**
 * fizz_buzz - print fizz , buzz, or both, or a number
 *
 * Return: void
 */

void fizz_buzz(void)
{
	int i, num = 100;

	for (i = 1; i <= num; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
		_putchar(' ');
	}
	_putchar('\n');
}

/**
 * main - check fizz buzz
 *
 * Return: (0)
 */

int main(void)
{
	fizz_buzz();
	return (0);
}
