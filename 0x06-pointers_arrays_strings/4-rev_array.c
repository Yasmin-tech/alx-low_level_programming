#include "main.h"

/**
 * void reverse_array - to reverse the array
 *@a: array pointer
 *@n: size of a
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}


