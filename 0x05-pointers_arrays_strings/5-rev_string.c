#include"main.h"
#include"2-strlen.c"

/**
 * rev_string - to reverses a string
 * @s: the string name
 */
void rev_string(char *s)
{
	int i;
	char k;

	for (i = 0 ; i < _strlen(s) / 2 ; i++)
	{
		k = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = k;
	}
}
