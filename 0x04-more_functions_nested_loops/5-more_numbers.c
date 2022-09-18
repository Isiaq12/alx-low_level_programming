#include"main.h"
/**
 * more_numbers - repeat 10 times
 *
 * Return: Success
 */
void more_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
	int j;

	for (j = 0 ; j <= 14 ; j++)
	{
		if (j > 9)
		{
			_putchar('0' + j / 10);
		}
		_putchar('0' + j % 10);
	}
	_putchar('\n');
	}
}
