#include <stdio.h>
#include "main.h"

/**
 * print_fib_98 - print the first 98 Fibonacci numbers
 *
 * Return: void
 */

void print_fib_98(void)
{
	unsigned long int i, a = 0, b = 1, result, l = 1000000000;
	unsigned long int a1, a2, b1, b2, result1, result2;

	for (i = 0; i < 91; i++)
	{
		result = a + b;
		printf("%lu, ", result);

		a = b;
		b = result;
	}

	a1 = a / l;
	a2 = a % l;
	b1 = b / l;
	b2 = b % l;

	for (i = 92; i < 99; i++)
	{
		result1 = a1 + b1;
		result2 = a2 + b2;

		printf("%lu", result1);
		printf("%09lu", result2);

		if (i != 98)
			printf(", ");

		a1 = b1 + (b2 / l);
		a2 = b2 % l;
		b1 = result1 + (result2 / l);
		b2 = result2 % l;
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	print_fib_98();
	return (0);
}
