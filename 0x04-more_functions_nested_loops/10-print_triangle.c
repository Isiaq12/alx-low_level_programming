#include"main.h"
/**
 * print_triangle - print a triangle
 *
 * @size: measurement
 *
 * Return: Success
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1 ; i <= size ; i++)
	{
	for (j = i ; j >= 1 ; j--)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
	}
}
