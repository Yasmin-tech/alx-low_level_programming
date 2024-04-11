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
	size_t low, high, jump_step, i;

	if (array == NULL)
		return (-1);

	jump_step = sqrt(size);
	low = 0;
	high = low + jump_step;

	while (value >= array[low] && high < size)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[high] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", low, high);

			for (i = low; i <= high; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}

		low = high;
		high = high + jump_step;
	}

	printf("Value checked array[%lu] = [%d]\n", low, array[low]);
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	for (i = low; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
