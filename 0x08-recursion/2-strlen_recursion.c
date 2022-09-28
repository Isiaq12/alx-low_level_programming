#include"main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int leng;

	if (*s == '\0')
		return (0);
	leng = (_strlen_recursion(s + 1) + 1);
	return (leng);
}