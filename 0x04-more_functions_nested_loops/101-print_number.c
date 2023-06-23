#include "main.h"

/**
 * print_number - print any givin number
 * @n: the number enterd
 *
 * Return: void
 */

void print_number(int n)
{
	int num = n;
	int divisor = 1;
	int digit; /* indiviuale numbers to be printes */

	/* print minus sign if it's a negative number */

	if (n < 0)
	{
		_putchar('-');

		/* the number now is positive */

		num = -num;
	}

	/* find the largest divisor of power of 10 to know the last position */

	while (num / divisor >= 10)
	{
		divisor *= 10;
	}

	/* print the number starting from left to write */

	while (divisor != 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
	}
}

