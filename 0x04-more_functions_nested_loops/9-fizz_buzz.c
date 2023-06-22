#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - print fizz , buzz, or both, or a number
 *
 * Return: void
 */

void fizz_buzz(void)
{
	int i, num = 100;

	for (i = 1; i <= num; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
}

/**
 * main - check fizz buzz
 *
 * Return: (0)
 */

int main(void)
{
	fizz_buzz();
	return (0);
}
