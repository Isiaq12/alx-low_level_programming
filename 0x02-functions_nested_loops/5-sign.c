#include"main.h"
/**
 * print_sign - print sign operator
 *
 * @n: name of the integer
 *
 * Return: Success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar(0);
	}
}
