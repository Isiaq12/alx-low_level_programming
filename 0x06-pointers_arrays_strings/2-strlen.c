#include"main.h"
/**
 * _strlen - length of a string
 *
 * @s: name of the string
 *
 * Return: Success
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
