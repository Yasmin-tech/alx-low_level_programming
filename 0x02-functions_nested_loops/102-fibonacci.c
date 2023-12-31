#include <stdio.h>
#include "main.h"

/**
 * print_fib_50 - print the first 50 Fibonacci numbers
 *
 * Return: void
 */

void print_fib_50(void)
{
	unsigned long int i, a = 0, b = 1;
	unsigned long int result;

	for (i = 0; i < 50; i++)
	{
		result = a + b;
		printf("%lu", result);

		if (i != 49)
		{
			printf(", ");
		}

		a = b;
		b = result;
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
	print_fib_50();
	return (0);
}
