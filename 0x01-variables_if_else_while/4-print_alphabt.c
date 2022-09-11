#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char m = 'a';

	for (m = 'a' ; m <= 'z' ; m++)
	{
		if (m == 'e' || m == 'q')
	{
		continue;
	}
	putchar(m);
	}
	putchar('\n');
	return (0);
}
