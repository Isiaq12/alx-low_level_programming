#include"main.h"

/**
 * _strchr - to locate a character in a string
 *
 * @s: string name
 * @c: the character
 *
 * Return: Always Success.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	if (s[i] == c)
	{
		return (s + i);
	}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
