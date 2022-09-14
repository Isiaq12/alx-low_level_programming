#include"main.h"
/**
 * _isalpha - check of alphabetic character
 *
 * @c: name of the integer
 *
 * Return: Success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
