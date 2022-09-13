#include"main.h"
/**
 * print_alphabet - function to display all lower case alphabet
 *
 * Return: Success
 */
void print_alphabet(void)
{
	char pk = 'a';
	
	while (pk <= 'z')
	{
		_putchar(pk);
		pk++;
	}
	_putchar('\n');
}
