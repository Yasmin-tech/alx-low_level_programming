# include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted array
 * of integers using the Iterative Binary search algorithm
 *
 *@array: a pointer to the array of values
 *@size: the size of the array
 *@value: the element to search in the array
 *
 * Return: the first index where value is located
 *  If value is not present in array or if array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low_idx = 0, high_idx = size - 1, mid_idx, i;

	if (array == NULL)
		return (-1);

	while (low_idx <= high_idx)
	{
		/* print the searching array */
		i = low_idx;
		printf("Searching in array: %d", array[i]);
		for (i = i + 1; i <= high_idx; i++)
			printf(", %d", array[i]);
		printf("\n");

		mid_idx = low_idx + (high_idx - low_idx) / 2;

		if (array[mid_idx] == value)
			return (mid_idx);
		else if (value < array[mid_idx])
			high_idx = mid_idx - 1;
		else
			low_idx = mid_idx + 1;
	}

	return (-1);
}

