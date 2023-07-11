#include <stdlib.h>

/**
 * alloc_grid -a function that returns
 *	a pointer to a 2 dimensional array of integers
 *@width: the width of the 1D array, the elements in each array
 *@height: the height of the array, the number of 1D arrays
 *
 * Return: a duple pointer , 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j, h, w, **arr = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(arr + i) = (int *)malloc(sizeof(int) * width);

		if (*(arr + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(arr + j));
			free(arr);
			return (NULL);
		}
	}

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			arr[h][w] = 0;
			w++;
		}
		h++;
	}

	return (arr);

}
