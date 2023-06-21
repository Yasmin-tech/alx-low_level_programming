#include "main.h"

/**
 * print_last_digit -  a function that print the last digit of a number
 * @n: The integer
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	if (n >= 0)
		return (n % 10);

	else
		return ((n * -1) % 10);
}
