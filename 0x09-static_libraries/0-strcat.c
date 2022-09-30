#include"main.h"
#include"2-strlen.c"

/**
 * _strcat - to join two strings together
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: Success
 */
char *_strcat(char *dest, char *src)
{
	int i, k1, k2;

	k1 = _strlen(dest);
	k2 = _strlen(src);

	for (i = 0 ; i <= k2 ; i++)
	{
		dest[k1 + i] = src[i];
	}
	return (dest);
}

