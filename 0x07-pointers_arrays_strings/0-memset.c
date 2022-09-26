#include"main.h"

/**
 * _memset - to fill one's memory area with a specific byte
 *
 * @s: string name
 * @b: character
 * @n: unknown positive integer
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = 'b';
	}
	return (s);
}
