#include"main.h"
/**
 * swap_int - to swap two integers
 *
 * @a: name of first variable
 *
 * @b: name of second variable
 *
 * Return: Success
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
