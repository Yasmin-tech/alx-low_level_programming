#include "main.h"

/**
 * print_number - a function to print a number usint _putchar
 *@n: a number
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int divisor = 1, digit, num;

	if (n < 0)
	{
		_putchar('-');
		num = -1 * n;
	}
	else
	{
		num = n;
	}
	while (num / divisor >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num = num % divisor;
		divisor /= 10;
	}

}

