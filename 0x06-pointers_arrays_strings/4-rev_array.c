#include"main.h"

/**
 * reverse_array - to reverse an array of integers
 *
 * @a: the array
 *
 * @n: the array size
 * Return: Success
 */
void reverse_array(int *a, int n)
{
	int i, ch;

	for (i = 0 ; i < (n / 2) ; i++)
	{
		ch = a[i];
		a[i] = a[n - i];
		a[n - i] = ch;
	}
}
