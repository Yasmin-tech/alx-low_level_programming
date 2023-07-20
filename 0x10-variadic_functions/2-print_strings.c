#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - a function that prints strings, followed by a new line
 *@separator: the string to print between the printed strings
 *@n: the numbers of strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int flag = 0;
	char *s;
	va_list arg;

	if (separator != NULL)
		flag = 1;
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (flag && (i < n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(arg);
}
