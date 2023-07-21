#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints arguments c: character, e: float, i: int, s: string
 *@format: a pointer to the list of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i, flag; /* len = strlen(format);*/
	char retrv;
	va_list arg;

	va_start(arg, format);
	i = 0;
	while ((format != NULL) && (retrv = format[i++]))
	{
		flag = 0;
		switch (retrv)
		{
			case 'c':
				print_c(arg);
				flag = 1;
				break;
			case 'i':
				print_i(arg);
				flag = 1;
				break;
			case 'f':
				print_f(arg);
				flag = 1;
				break;
			case 's':
				print_s(arg);
				flag = 1;
				break;
			default:
				break;
		}
		if (flag && format[i])
			printf(", ");
	}
	printf("\n");
	va_end(arg);
}

/**
 * print_s - print a string in a va_list
 *@arg: va_list
 *
 * Return: nothing
 */

void print_s(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);

	while (s != NULL)
	{
		printf("%s", s);
	}
	if (s == NULL)
	{
		printf("(nil)");
	}

}

/**
 * print_i - print an integer in a va_list
 *@arg: va_list
 *
 * Return: nothing
 */

void print_i(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

/**
 * print_c - print a character in a va_list
 *@arg: va_list
 *
 * Return: nothing
 */

void print_c(va_list arg)
{
	int c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_f - print a double value in va_list
 *@arg: va_list
 *
 * Return: nothing
 */

void print_f(va_list arg)
{
	double f;

	f = va_arg(arg, double);
	printf("%1f", f);
}
