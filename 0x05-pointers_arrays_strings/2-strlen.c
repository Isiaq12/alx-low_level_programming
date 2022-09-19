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
	int i;

	for (i = 0 ; s[i] != '\0' ; ++i);
	return (i);
}
