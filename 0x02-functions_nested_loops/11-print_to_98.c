#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  a function that print the numbers till 98
 * @n: The integer that first will be printed
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
