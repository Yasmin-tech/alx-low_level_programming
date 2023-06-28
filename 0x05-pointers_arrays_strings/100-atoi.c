#include "main.h"

/**
 * _atoi - string to integer
 * @s: string pointer
 *
 * Return: int
 */

int _atoi(char *s)
{
	int num, result = 0, sign = 1;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	while (*s != '\0' && (*s >= '0' && *s <= '9'))
	{
		num = *s - '0';
		result = result * 10 + num;
		s++;
	}

	return (sign * result);

}
