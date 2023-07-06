#include "main.h"

int maltiple(int i, int n);

/**
 * _sqrt_recursion - find the square root of an integer
 *@n: an integer to find the square root of
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	if (n < 0)
		return (-1);
	i = 2;

	return (maltiple(i, n));
}

/**
 * maltiple - find the integer maltiple by itself and
 *	compare it to a givin number
 *@i: an integer to multiple by itself
 *@n: and intger to check if any multiplication of i matches it
 *
 * Return: an integer indicates if square root of n is found or not
 */

int maltiple(int i, int n)
{
	int result = i * i;

	if (result == n)
		return (i);
	if (result > n)
		return (-1);
	return (maltiple((i + 1), n));
}
