#include"main.h"
/**
 * _islower - check for lowercase lettter
 *
 * @c: is the is the name of the character used
 *
 * Return: Success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
