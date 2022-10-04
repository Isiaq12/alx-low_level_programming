#include<stdlib.h>

/**
 * free_grid - free a 2 dimensional grid
 *
 * @grid: The grid we will free up
 * @height: The number of rows in the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
