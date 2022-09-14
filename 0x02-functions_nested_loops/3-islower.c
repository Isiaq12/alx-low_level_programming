#include"main.h"
/**
 *int _islower - check for lowercase lettter
 *
 * Return: Success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
