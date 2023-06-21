#include "main.h"

/**
 * sum_multiples_3_and_5 -  Write a program that
 * computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded), followed by a new line
 *
 * Return: void
 */
void sum_multiples_3_and_5(void)
{
	int i, sum = 0;

	for (i = 2; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	_putchar((sum / 100000) + '0');
	_putchar(((sum / 10000) % 10) + '0');
	_putchar(((sum / 1000) % 10) + '0');
	_putchar(((sum / 100) % 10) + '0');
	_putchar(((sum / 10) % 10) + '0');
	_putchar((sum % 10) + '0');
	_putchar('\n');
}
/**
 * main - entry point
 *
 * Return: 0 alwayes
 */
int main(void)
{
	sum_multiples_3_and_5();
	return (0);
}
