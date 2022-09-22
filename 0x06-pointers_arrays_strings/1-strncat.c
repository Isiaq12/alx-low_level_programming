#include"main.h"
#include"2-strlen.c"

/**
 * _strncat - to concatenate some character
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: particular character to join
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, s1;

	s1 = _strlen(dest);

	for (i = 0 ; i < n && src[i] != 0 ; i++)
	{
		dest[s1 + i] = src[i];
	}
	dest[s1 + i] = '\0';
	return (dest);
}
