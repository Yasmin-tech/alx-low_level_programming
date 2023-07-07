#include <stdio.h>

/**
 * main - a function that prints the name of
 *	the program that its used in
 *@argc: a counter of command line arguments
 *@argv: an array of string pointer
 *
 * Return: (0) Successfuly.
 */

int main(__attribute__((__unused__)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
