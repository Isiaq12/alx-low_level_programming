#include"main.h"
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
	unsigned int i = 0;
	char *s;

	s = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (0);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	free (s);
	return (s);
}
