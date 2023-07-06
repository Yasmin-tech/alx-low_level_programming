#include "main.h"

int check_divisors(int n, int i, int divisor);

/**
 * is_prime_number - check a number if it's prime or not
 *@n: a number to check
 *
 * Return: 1 if n is prime or 0 otherwise
 */

int is_prime_number(int n)
{
	int i, divisor;

	if (n == 1 || n == -1)
		return (0);

	if (n == 2 || n == -2)
		return (1);
	divisor = 1;
	i = 2;

	return (check_divisors(n, i, divisor));
}

/**
 * check_divisors - check if n has divisors other than n and 1
 *@n: the integer to check
 *@i: the number to devide n by
 *@divisor: a counter for divisorrs
 *
 * Return: 1 has no divisors or 0 otherwise
 */

int check_divisors(int n, int i, int divisor)
{
	if (n % i == 0)
		divisor++;

	if (n == i)
		return (1);
	if (divisor > 1)
		return (0);

	return (check_divisors(n, i + 1, divisor));
}
