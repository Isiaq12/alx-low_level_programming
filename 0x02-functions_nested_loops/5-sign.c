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
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
