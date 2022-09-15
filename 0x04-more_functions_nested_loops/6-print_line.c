#include"main.h"
/**
 * print_line - print a straight line
 *
 * @n: name of unknown variable
 *
 * Return: Success
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('-');
	}
	}
	_putchar('\n');
}
