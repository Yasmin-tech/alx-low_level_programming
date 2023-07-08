#include <stdio.h>
#include <stdlib.h>

int change(int cents, int coins);

/**
 * main -  a program that prints the minimum number of
 *	coins to make change for an amount of money
 *@argc: a counter of command line arguments
 *@argv: an array of string pointer
 *
 * Return: (0) Successfuly.
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("0\n");
	else
		printf("%d\n", change(cents, coins));

	return (0);
}

/**
 * change - finds coins to change the amount of money
 *@cents: the amount of cents to change
 *@coins: the numbers of changed coins
 *
 * Return: the minimum number of coins
 */

int change(int cents, int coins)
{
	int i;
	int a[] = {1, 2, 5, 10, 25};

	if (cents == 0)
		return (coins);
	for (i = 0; i < 5; i++)
	{
		if (cents == a[i])
		{
			coins++;
			return (coins);
		}
		else if (a[i] > cents)
		{
			coins++;
			return (change(cents - a[i - 1], coins));
		}

	}
	return (change(cents - a[4], coins + 1));
}
