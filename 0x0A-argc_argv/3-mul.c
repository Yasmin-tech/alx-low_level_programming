#include <stdio.h>

/**
 * main -  a program that multiplies two numbers
 *@argc: a counter of command line arguments
 *@argv: an array of string pointer
 *
 * Return: (0) Successfuly.
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = (((*(argv[1])) - '0') * (((*(argv[2])) - '0')));
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
