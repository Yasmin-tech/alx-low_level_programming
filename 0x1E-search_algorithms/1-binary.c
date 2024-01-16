# include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
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
	size_t mid_idx, left_idx, right_idx, i, j;

	if (array == NULL)
		return (-1);

	left_idx = 0;
	right_idx = size - 1;
	while (left_idx <= right_idx)
	{
		j = 0;
		printf("Searching in array: ");
		for (i = left_idx; i <= right_idx; i++)
		{
			if (j == 0)
			{
				printf("%d", array[i]);
				j = 1;
			}
			else
				printf(", %d", array[i]);

		}
		printf("\n");

		mid_idx = (left_idx + right_idx) / 2;

		if (array[mid_idx] == value)
			return (mid_idx);
		else if (array[mid_idx] > value)
			right_idx = mid_idx - 1;
		else if (array[mid_idx] < value)
			left_idx = mid_idx + 1;
	}
	return (-1);
}

