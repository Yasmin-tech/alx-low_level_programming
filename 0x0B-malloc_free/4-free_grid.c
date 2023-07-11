#include <stdlib.h>

/**
 * free_grid -  a function that frees a 2 dimensional grid
 *	previously created by your alloc_grid function.
 *@grid: 2D array
 *@height: the numbers of 1D arrays
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	i = 0;
	while (i < height)
	{
		free(*(grid + i));
		i++;
	}

	free(grid);

}
