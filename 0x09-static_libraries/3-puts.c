#include"main.h"
/**
 * _puts - to print a string to stdout
 *
 * @str: name of the string
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\n' && str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
