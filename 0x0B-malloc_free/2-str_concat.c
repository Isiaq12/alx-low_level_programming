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
	unsigned int i, k;
	unsigned int len1, len2;
	int total;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	while (s2[k] != '\0')
	{
		len2++;
		k++;
	}
	total = (len2 + len1);
	concat = malloc(sizeof(*s1) * total);
	if (concat == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (k = 0; k < len2; k++)
	{
		concat[len1 + k] = s2[k];
	}
	return (concat);
}


