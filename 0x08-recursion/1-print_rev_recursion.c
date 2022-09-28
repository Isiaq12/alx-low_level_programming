#include"main.h"

/**
 * _print_rev_recursion - to print a string in a reverse with a recursion
 *
 * @s: the string
 *
 * Return: Always Success
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
