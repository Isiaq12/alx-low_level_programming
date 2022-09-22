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
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
