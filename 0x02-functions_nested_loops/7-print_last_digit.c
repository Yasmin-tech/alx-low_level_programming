#include "main.h"

/**
 * print_last_digit -  a function that print the last digit of a number
 * @n: The integer
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (n >= 0)
	{
		_putchar(i + '0');
		return (i);
	}

	else
	{
		i = i * (-1);
		_putchar(i + '0');
		return (i);
	}
}
