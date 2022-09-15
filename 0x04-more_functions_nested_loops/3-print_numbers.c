#include"main.h"
/**
 * print_numbers - to display digit
 *
 * Return: Success
 */
void print_numbers(void)
{
	int k = 0;

	while (k <= 9)
	{
		_putchar('0' + k);
		k++;
	}
	_putchar('\n');
}
