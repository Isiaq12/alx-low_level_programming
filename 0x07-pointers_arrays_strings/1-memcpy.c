#include"main.h"

/**
 * _memcpy - to copy memory address from one string to another
 *
 * @dest: destination string
 * @src: source string
 * @n: size
 *
 * Return: Always Success.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
