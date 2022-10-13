#include<stdio.h>
#include"function_pointers.h"

/**
 * int_index - to searches for an integer
 *
 * @array: array name
 * @size: array size
 * @cmp: pointer to a function
 *
 * Return: Always Success.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
		return (i);
	}
	return (-1);
}


