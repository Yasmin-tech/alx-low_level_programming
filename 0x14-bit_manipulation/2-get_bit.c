#include "main.h"
#include <stdio.h>

/**
 * get_bit - a function that returns the value of a bit at a given index
 *@n: the number
 *@index: starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	unsigned int bit;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	if (!n)
		return (0);

	while (n != 0)
	{
		bit = n % 2;
		if (i == index)
			return (bit);

		n = n >> 1;
		i++;

	}

	return (0);
}
