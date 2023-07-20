#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *	print the opcode of this program
 *@args: the number of command line arguments
 *@argv: array of pointer to the arguments
 *
 * Return: 0 (on succeess) . 1 or 2 (on error)
 */

int main(int args, char *argv[])
{
	int bytes, i;
	unsigned char *p;

	if (args != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = (unsigned char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02x", *(p + i));

		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
