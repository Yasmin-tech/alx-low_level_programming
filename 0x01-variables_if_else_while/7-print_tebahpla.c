#include <stdio.h>

/**
* main - print character z-a
*
* Return: (0) Successfly!
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
