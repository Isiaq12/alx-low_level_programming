#include"main.h"
#include<stddef.h>

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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
			s++;
		}
		return (NULL);
	}
}
