#include <stdio.h>

/**
* main - print character 0-9 a-f
*	HexaDecimal Numbers
*
* Return: (0) Successfully!
*/

int main(void)
{
	int i = 0;
	char ch = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
