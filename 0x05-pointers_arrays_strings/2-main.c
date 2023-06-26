#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char *str1;
	int len;

	str1 = "Holberton!";
	len = _strlen(str1);
	printf("%d\n", len);
	return (0);
}
