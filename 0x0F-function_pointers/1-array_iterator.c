#include <stdlib.h>

/**
 * array_iterator - a function thar iterate over an array and
 *	do a certain action on each element
 *@array: a pointer to an int array
 *@size: the size or the number of element in the array
 *@action: a pointer to a function to call-back on each element
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	
	if (array == NULL)
		return;



	for (i = 0; i < size; i++)
		action(array[i]);
}

