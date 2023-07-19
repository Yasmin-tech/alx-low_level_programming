#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *Description: a program tha 4 accepts command line arguments
 *		the name of the program and 2 operand that has
 *		an operator between them. The result will be printed
 *		according to the spicfied operation.
 *@args: the numbers of arguments
 *@argv: an array of pointers
 * Return: nothing;
 */

int main(int args, char *argv[])
{
	int a, b; /* operands */
	char *s;  /* the operator */
	int (*p)(int, int); /* a function pointer */


	if (args != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	p = get_op_func(s);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((p == op_div || p == op_mod) && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", p(a, b));

	return (0);
}
