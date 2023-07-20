#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print unlimited numbers of integers
 *@separator: the string to print between the integers
 *@n: the numbers od integers to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int flag = 0, num;
	va_list arg;

	if (separator != NULL)
		flag = 1;
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		printf("%d", num);

		if (flag && (i < n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(arg);
}
