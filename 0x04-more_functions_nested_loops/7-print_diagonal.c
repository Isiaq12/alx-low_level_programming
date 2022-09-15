#include"main.h"
/**
 * print_diagonal - to print a diagonal line
 *
 * @n: character to return
 *
 * Return: Success
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1 ; i <= n ; i++)
	{
	for (j = 1 ; j <= i ; j++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
