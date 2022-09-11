#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char kun = 'z';

	while (kun >= 'a')
	{
		putchar(kun);
		kun--;
	}
	putchar('\n');
	return (0);
}
