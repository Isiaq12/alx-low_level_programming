#include"main.h"
/**
 * more_numbers - repeat 10 times
 *
 * Return: Success
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
	int j = 0;

	while (j <= 14)
	{
		_putchar('0' + j);
		j++;
	}
	_putchar('\n');
	i++;
	}
}
