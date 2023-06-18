#include <stdio.h>

/**
* main - print character a-z
*
* Return: (0) Successfly!
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
