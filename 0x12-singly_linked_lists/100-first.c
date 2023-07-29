#include <stdio.h>

__attribute__((constructor))

/**
 * premain -  A function that is executed before the main function
 *
 * Return: void
 */

void premain(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
