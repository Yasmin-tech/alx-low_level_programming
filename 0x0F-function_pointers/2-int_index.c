#include <stdlib.h>

/**
 * int_index - a function that finds the index of the first element
 *	int an  array that satisfy a certain logic
 *@array: a pointer to ints array
 *@size: the number of the elements in the array
 *@cmp: the function that decide the logic of comparation
 *
 * Return: the index of the first occurance of the element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, _at;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		_at = cmp(array[i]);

		if (_at != 0)
			return (i);
	}

	return (-1);
}
