# include "search_algos.h"

int recursive_advanced_binary(int *array, int value, size_t left_idx,
		size_t right_idx);

/**
 * advanced_binary - a function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 *@array: a pointer to the array of values
 *@size: the size of the array
 *@value: the element to search in the array
 *
 * Return: the first index where value is located
 *  If value is not present in array or if array is NULL, return -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left_idx, right_idx;

	if (array == NULL || size == 0)
		return (-1);

	left_idx = 0;
	right_idx = size - 1;

	return (recursive_advanced_binary(array, value, left_idx, right_idx));
}
/**
 * recursive_advanced_binary - a helper function
 * Discibtion: searches for a value in a sorted array of integers using the
 *				Binary search algorithm (The recursive approach)
 *
 *@array: a pointer to the array of values
 *@value: the element to search in the array
 *@left_idx: the index of the first element in the subarray
 *@right_idx: the index of the last element in the subarray
 *
 * Return: the first index where value is located
 *  If value is not present in array or if array is NULL, return -1
 */

int recursive_advanced_binary(int *array,
		int value, size_t left_idx, size_t right_idx)
{
	size_t i, j, mid_idx;


	if (left_idx <= right_idx)
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
		{
			if (mid_idx == 0 || array[mid_idx - 1] != value)
				return (mid_idx);
			else
				return (recursive_advanced_binary(array, value, left_idx, mid_idx));
		}
		else if (array[mid_idx] > value)
		{
			if (mid_idx > 0)
				return (recursive_advanced_binary(array, value, left_idx, mid_idx - 1));
			else
				return (-1);
		}
		else
			return (recursive_advanced_binary(array, value, mid_idx + 1, right_idx));
	}
	return (-1);
}

