#include"main.h"
/**
 * _strspn - gets the lenght of a prefix substring
 *
 * @s: string name
 * @accept: the prefix
 *
 * Return: Always success
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 1;

	while (*s != *accept)
	{
		s++;
		i++;
	}
	return (i);
}
