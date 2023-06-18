#include <stdio.h>

/**
* main - print character a-z and the A-Z
*
* Return: (0) Successfly!
*/

int main(void)
{
	char ch = 'a';
	char ch_2 = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch_2 <= 'Z')
	{
		putchar(ch_2);
		ch_2++;
	}
	putchar('\n');
	return (0);
}
