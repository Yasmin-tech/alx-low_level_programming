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
	size_t low, high, i, jump_steps;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = 0;
	jump_steps = sqrt(size);

	while ((high + jump_steps) < size)
	{
		low = high;
		high = high + jump_steps;

		printf("Value checked array[%ld] = [%d]\n", low, array[low]);

		if (value >= array[low] && value <= array[high])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);

			for (i = low; i <= high; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);

				if (array[i] == value)
					return (i);
			}
			return (-1);
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	for (i = low; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
