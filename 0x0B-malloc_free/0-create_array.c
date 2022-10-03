#include"main.h"
#include<string.h>
#include<stdlib.h>

/**
 * create_array - to create an array of character
 *
 * @size: size of the array
 * @c: specific character of the array
 *
 * Return: NULL if size is 0 or
 * return the pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;
	unsigned int len = strlen(s);

	s = malloc((len + 1) * sizeof(char));
	if (size == 0)
	{
		return (0);
	}
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
