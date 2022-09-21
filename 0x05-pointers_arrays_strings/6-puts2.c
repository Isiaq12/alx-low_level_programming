#include"main.h"

/**
 * puts2 - prints every other char of a string
 *
 * @str: string name
 *
 * Return: Success
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
