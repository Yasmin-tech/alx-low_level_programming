#include "main.h"

/**
 * factorial - calculate the factorial of a number
 *@n: an integer
 *
 * Return: n!
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1 || n == 0)
		return (1);

	return (n * factorial(n - 1));
}
