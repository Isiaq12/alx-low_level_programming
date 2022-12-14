#include"main.h"

/**
 * _strlen - return length of a string
 *
 * @str: the string
 *
 * Return: length
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check - checks to see if a string is palindrome
 *
 * @l: left
 * @r: right
 * @p: possible palindrome
 *
 * Return: 1 or 0.
 */
int check(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (check(l + 1, r - 1, p));
}

/**
 * is_palindrome - checks for a palindrome
 *
 * @s: the string name
 *
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check(0, i, s));
}
