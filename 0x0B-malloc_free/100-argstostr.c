#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - a function that concatenates all the arguments of a program.
 *@ac: the numbers of command line arguments
 *@av: a pointer to array of pointer to charcters
 *
 * Return: a pointer to the string contains all program arguments
 */

char *argstostr(int ac, char **av)
{
	char *p, *pp;
	int i, j, sum_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		sum_len += strlen(*(av + i));
	}

	p = (char *)malloc(sizeof(char) * sum_len + ac + 1);

	if (p == NULL)
		return (NULL);


	pp = p;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*pp = av[i][j];
			pp++;
		}
		*pp = '\n';
		pp++;
	}

	*pp = '\0';

	return (p);
}
