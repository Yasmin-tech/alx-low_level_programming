#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  a program that adds positive numbers
 *@argc: a counter of command line arguments
 *@argv: an array of string pointer
 *
 * Return: (0) Successfuly.
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;
	int num = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{

			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		sum += num;

	}
	printf("%d\n", sum);
	return (0);
}
