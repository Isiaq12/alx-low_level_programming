#include<stdio.h>
#include"function_pointers.h"

/**
 * array_iterator - to passed each element of the array to a given function
 * @array: the array
 * @size: the size of the array
 * @action: pointer to a function
 *
 * Return: Always Success.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	return (0);
}
