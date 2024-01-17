# include "search_algos.h"
# include <math.h>
/**
 * jump_search - a function that searches for a value in a sorted array
 * of integers using Jump search algorithm
 *
 *@array: a pointer to the array of values
 *@size: the size of the array
 *@value: the element to search in the array
 *
 * Return: the first index where value is located
 *  If value is not present in array or if array is NULL, return -1
 */

int jump_search(int *array, size_t size, int value)
{
	int index, prev, jumps, jumps_counter;

	prev = index = 0;
	jumps_counter = 0;
	jumps = (int)sqrt((double)size);

	do {

		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);

		prev = index;
		jumps_counter++;
		index = jumps_counter * jumps;

	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);


	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
