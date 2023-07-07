#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that adds positive numbers
 *@argc: a counter of command line arguments
 *@argv: an array of string pointer
 *
 * Return: (0) Successfuly.
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	for (i = 1; i <= argc; i++)
	{
		if (i == argc)
		{
			break;
		}
		else if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}

	}
	printf("%d\n", sum);
	return (0);
}
