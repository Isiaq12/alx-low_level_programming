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
	char *s;
	int i;
	int size = 1;

	if (str == NULL)
	{
		return ('\0');
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		size += i;
	}
	s = malloc(size	* sizeof(*str));
	if (s == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		s[i] += str[i];
	}
	s[i] = '\0';
	return (s);
}
