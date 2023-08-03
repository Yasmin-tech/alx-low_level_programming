#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 *@b: a pointer to a character that contains 0'es and 1'es
 *
 *Return: the converted number, or 0 if
 *	there is one or more chars in the string b that is not 0 or 1
 *	or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	const char *ptr;
	int count = 0;
	unsigned int n, sum = 0, mul = 1;

	if (b == NULL)
		return (0);

	ptr = b;
	while (*ptr != '\0')
	{
		if (*ptr != '0' && *ptr != '1')
			return (0);

		count++;
		ptr++;
	}

	ptr = b;
	while (count)
	{
		n = *(ptr + (count - 1)) - '0';
		if (n != 0)
		{
			sum += n * mul;
		}

		count--;
		mul *= 2;
	}

	return (sum);
}
