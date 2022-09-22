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

	n = n - 1;
	for (i = 0 ; i < n ; i++)
	{
		ch = a[i];
		a[i] = a[n];
		a[n] = ch;
		n--;
	}
}
