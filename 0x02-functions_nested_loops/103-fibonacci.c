#include <stdio.h>
#include "main.h"

/**
 * print_sum_even_fib - a program that finds and prints
 * the sum of the even-valued terms
 *
 * Return: void
 */

void print_sum_even_fib(void)
{
	unsigned long int a = 0, b = 1;
	unsigned long int result = 0, sum = 0;

	for (; result <= 4000000; )
	{
		result = a + b;

		if (result % 2 == 0)
		{
			/*printf("%lu ", result);*/
			sum += result;

		}

		a = b;
		b = result;
	}
	printf("%lu\n", sum);
}

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	print_sum_even_fib();
	return (0);
}
