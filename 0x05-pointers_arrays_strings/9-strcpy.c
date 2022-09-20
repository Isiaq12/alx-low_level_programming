#include"main.h"
#include"2-strlen.c"

/**
 * _strcpy - to copy one value to another
 *
 * @dest: the destination
 *
 * @src: the source
 *
 * Return: the copied values
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
