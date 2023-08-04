#include "main.h"

/**
 * get_endianness -  a function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *p = (char *) &n;

	if (*p)
		return (1);
	else
		return (0);
}
