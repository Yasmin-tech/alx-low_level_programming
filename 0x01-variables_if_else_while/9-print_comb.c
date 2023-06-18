#include <stdio.h>

/**
* main - print character a-z
*
* Return: (0) Successfully!
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i == 9)
		{
			putchar('$');
			break;
		}
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('$');
	return (0);
}
