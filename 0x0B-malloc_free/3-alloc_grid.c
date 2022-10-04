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
	int total;
	int **A;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	{
		k += i++;
		p += j++;
		total = (k * p);
	}
	A = malloc(total * sizeof(int));
	if (A == NULL)
	{
		free (A);
		return ('\0');
	}
	if (total == 
