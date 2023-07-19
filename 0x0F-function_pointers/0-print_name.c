#include <stdlib.h>

/**
 * print_name - print the name passed throug another function
 *@name: character pointer of the name to be printed
 *@f: a pointer to the function that does the printing
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
