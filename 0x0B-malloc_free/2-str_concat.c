#include"main.h"
#include<stdlib.h>

/**
 * str_concat - to concatenate two strings together
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: to a newly allocated space in memory
 * or NULL if it as an empty string
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i;
	unsigned int len = 0;

	if (s1 == NULL)
	{
		return ('\0');
	}
	while (*(s1 + len) != '\0')
	{
		size += len++;
	}
	concat = malloc(size * sizeof(*s1));
	if (concat == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		concat[size + i] = s2[i];
	}
	return (concat);
}

