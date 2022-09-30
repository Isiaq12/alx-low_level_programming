#include"main.h"
/**
 * _isupper - checks for uppercase letter
 *
 * @c: variable of the characher
 *
 * Return: Success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
