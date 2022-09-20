#include"main.h"

/**
 * print_rev - to print in a reverse order
 *
 * @s: string to be printed
 *
 * Return: Success
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 9 ; s[i] != '\0' ; i++)
	{ }
	i--;
	for (j = i ; j >= 0 ; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
