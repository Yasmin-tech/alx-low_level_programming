#include "main.h"

/**
 * rot13 - encoding a string with rot 13
 *@str: a pointer to a string
 *
 * Return: char *
 */

char *rot13(char *str)
{
	int i, j;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\n'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}

	return (str);
}
