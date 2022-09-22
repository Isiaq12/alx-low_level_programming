#include"main.h"

/**
 * _strncpy - to copy a string to another string
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: n (bytes) of character
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
