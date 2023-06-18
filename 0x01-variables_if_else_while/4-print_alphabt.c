#include <stdio.h>

/**
* main - print character a-z exept 'e' and 'q'
*
* Return: (0) Successfly!
*/

int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
