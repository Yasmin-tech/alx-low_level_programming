#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - The last digit
* @n: will be assigned differenrt integers
*
* Description: This program will assign a random
* number to the variable n each time it is executed
* and prints if n is < , > , or = to 0.
* Return:(0) Successfuly
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n%10 > 5)
		printf("Last digit of %d and is greater than 5\n", n);
	else if (n%10 == 5)
		printf("Last digit of %d and is 0\n", n);
	else if (n%10 < 6 && n != 0)
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	return (0);
}
