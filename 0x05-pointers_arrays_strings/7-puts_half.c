#include"main.h"
#include "2-strlen.c"

/**
 * puts_half - prints the last half of a string
 * @str: string name
 *
 * Return: Success
 */
void puts_half(char *str)
{
	int i, j;
	int n = (_strlen(str)) - 1 / 2;

	if ((_strlen(str)) % 2 != 0)
	{
	for (j = n ; j < (_strlen(str)) ; j++)
	{
		_putchar(str[j]);
	}
	}
	else
	{
	for (i = (_strlen(str)) / 2 ; i < (_strlen(str)) ; i++)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
