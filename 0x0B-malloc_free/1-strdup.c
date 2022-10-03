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
	unsigned int i;
	char *s;
	unsigned int = size;

	if (str == NULL)
	{
		return ('\0');
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return ('\0');
	}
	for (i = 0; str[i] = '\0'; i++)
	{
		str[i] = s[i];
	}
	s[i] = '\0';
	return (s);
}
