#include"main.h"

/**
 * _strcmp - to compare two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	int i, value = 0;

	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			value = s1[i] - s2[i];
			break;
		}
	}
	return (value);
}

