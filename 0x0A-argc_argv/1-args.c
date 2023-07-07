#include <stdio.h>

/**
 * main - a program that prints the number
 *	of arguments passed into it
 *@argc: a counter of command line arguments
 *@argv: an array of string pointer
 *
 * Return: (0) Successfuly.
 */

int main(__attribute__((__unused__)) int argc, __attribute__((__unused__)) char *argv[])
{
	printf("%d\n", argc);

	return (0);
}
