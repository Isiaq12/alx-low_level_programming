#include"main.h"
/**
 * print_alphabet_x10 - 10 times the lowercase alphabet
 *
 * Return: Success
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
	char kw = 'a';

	while (kw <= 'z')
	{
		_putchar(kw);
		kw++;
	}
	_putchar('\n');
	i++;
	}
}
