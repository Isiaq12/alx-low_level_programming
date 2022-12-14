#include"main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: the string
 * @accept: string to check
 *
 * Return: Always Success.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	for (j = 0 ; accept[j] != '\0' ; j++)
	{
	if (s[i] == accept[j])
		break;
	}
	if (accept[j] != '\0')
		return (s + i);
	}
	return (0);
}
