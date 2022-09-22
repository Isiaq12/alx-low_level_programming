#include"main.h"

/**
 * cap_string - capitalizes all words
 *
 * @str: string name
 *
 * Return: pointer
 */
char *cap_string(char *str)
{
	int i, j;
	char a[] = " \t\n,;.!?\"(){]";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] -= 32
			}
			else
			{
				for (j = 0 ; j <= 12 ; j++)
				{
					if (a[j] == str[i - 1])
				{
					str[i] -= 32;
				}
				}
			}
		}
	}
	return (str);
}
