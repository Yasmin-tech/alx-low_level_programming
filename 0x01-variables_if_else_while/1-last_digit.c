#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - The last digit
*
* Description: This program will assign a random
* number to the variable n each time it is executed
* and prints if n is < , > , or = to 0.
* Return:(0) Successfuly
*/
int main(void)
{
	int n;
	int last_integer = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_integer = n % 10;
	if (last_integer > 5)
		printf("Last digit of %d is %d and is greater than 5\n"
				, n, last_integer);
	else if (last_integer == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (last_integer < 6 && last_integer != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
				, n, last_integer);
	return (0);
}
