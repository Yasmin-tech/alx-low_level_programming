#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverse a string
 * @s: string array
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int i, j;
	int index;
	char tmp;

	for (j = 0; s[j] != '\0'; j++)
	{
		len++;
	}


	index = len - 1;



	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[index - i];
		s[index - i] = tmp;
	}
}


