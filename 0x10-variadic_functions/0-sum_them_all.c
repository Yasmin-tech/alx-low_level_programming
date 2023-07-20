#include <stdarg.h>

/**
 * sum_them_all - a function that calculate the sum
 *	of varaible number arguments
 *@n: the number of arguments
 *
 * Return: int sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg;

	if (n == 0)
		return (sum);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	return (sum);
	va_end(arg);
}
