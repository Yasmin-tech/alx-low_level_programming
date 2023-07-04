#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals of 2D array
 *@a: a pointer to int
 *@size: the number of rows and columns of 2D matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;
	int *p = a;

	i = 0;
	while (i < size * size)
	{
		sum1 += *p;
		p += size + 1;
		i += size + 1;
	}

	p = a + size - 1;
	i = 0;
	while (i < size * size - size)
	{
		sum2 += *p;
		p += size - 1;
		i += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
