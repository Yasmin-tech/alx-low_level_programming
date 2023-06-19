#include <stdio.h>

/*
* main - prints all possible combinations
* Description: The two numbers should be separated by a space
*
*
* The numbers should range from 0 to 99
* Return: 0 (Success)
*/

int main(void)
{
	int i, j, k, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8 ; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (m = 0; m <= 9; m++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(m + '0');
					if (i == 9 && j == 8 && k == 9 && m == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
