#include <stdio.h>
#include <math.h>

/**
 * prime_factor - print largest prime factore of 612852475143
 *
 * Return: void
 */

void prime_factor(void)
{
	int i;
	long int maxPrime = 1;
	int num = 612852475143;

	while (num % 2 == 0)
	{
		maxPrime = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i++)
	{
		while (num % i == 0)
		{
			maxPrime = i;
			num /= i;
		}
	}

	if (num > 2)
		maxPrime = num;

	    printf("%ld\n", maxPrime);
}

/**
 * main - entry point
 *
 * Return: 0 alwayes
 */

int main(void)
{
	prime_factor();
	return (0);
}
