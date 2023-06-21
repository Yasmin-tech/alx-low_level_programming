#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_last_digit(98);
  _putchar('0' + r);

    r = print_last_digit(0);
    _putchar('0' + r);

    r = print_last_digit(-1024);
    _putchar('0' + r);
    printf (" Min %d ", INT_MIN);
    r = print_last_digit(INT_MIN);
	_putchar('0' + r);
    _putchar('\n');
    return (0);
}
