#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char mp = 'a';
	char ck = 'A';

	while (mp <= 'z')
	{
		putchar(mp);
		mp++;
	}
	while (ck <= 'Z')
	{
		putchar(ck);
		ck++;
	}
	putchar('\n');
	return (0);
}
