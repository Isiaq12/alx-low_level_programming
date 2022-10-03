#include"main.h"
#include<stdlib.h>

/**
 * _strdup - to returns a pointer to a newly allocated space in memory
 *
 * @str: duplicate of the string
 *
 * Return: return a pointer to the duplicated string or NULL
 * if str is NULL or return NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *s;
	unsigned int size = 0;

	if (str == NULL)
	{
		return ('\0');
	}
	while ((*str + size) != '\0')
	{
		size++;
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return ('\0');
	}
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
