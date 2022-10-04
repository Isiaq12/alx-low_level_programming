#include"main.h"
#include<stdlib.h>

/**
 * alloc_grid - to intitialize all element of the grid to 0.
 *
 * @width: coloumn
 * @height: row
 *
 * Return: NULL on failure OR return NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height);
{
	int i;
	int j;
	int f;
	int **A;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	A = malloc(sizeof(int *) * height);
	if (A == NULL)
	{
		free(A);
		return('\0');
	}
	for (i = 0; i < height; i++)
	{
		A[i] = malloc(sizeof(int) * width);
		if (A[i] == NULL)
		{
			for (f = i; f >= 0; f--)
				free (A[f]);
			free (A);
			return('\0');
		}
		for (j = 0; j < width; j++)
			A[i][j] = 0;
	}
	return (A);
}
