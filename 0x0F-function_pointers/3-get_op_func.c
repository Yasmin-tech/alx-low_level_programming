#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - a function that return a function pointer to an operation
 *@s: the operator
 *
 * Return: a function pointer of the function that does the spicified operation
 *	   if it's not a valid operator, the function return NULL
 */

int (*get_op_func(char *s))(int, int)
{
	/* a struct of 2 members: op(the operator) and f(a function pointer) */
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i;

	i = 0;
	while ((ops[i].op) != NULL)
	{
		if (!(strcmp((ops[i].op), s)))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
