#include"main.h"

/**
 * _puts_recursion - to use recursion to print a string
 *
 * @s: the string
 *
 * Return: Always Success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
