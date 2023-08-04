#include "main.h"

/**
 * flip_bits - a function that returns the number of bits need to
 *	flip to get from one number to another
 *@n: the first number
 *@m: the second number
 *
 * Return: numbers of flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p;
	int flip = 0;
	char bit;

	p = n ^ m;

	while (p)
	{
		bit = p & 1;
		/* value of bit is 0 or 1, so we can say flip += p & 1  */
		if (bit == 1)
			flip++;
		p = p >> 1;
	}

	return (flip);
}
