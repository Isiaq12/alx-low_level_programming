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
	int i;

	for (i = 0 ; i <= (_strlen(src)) ; i++)
	{
		dest[(_strlen(dest) + i)] = src[i];
	}
	return (dest);
}

