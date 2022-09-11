#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int fig = 0;
	char con = 'a';

	while (fig <= 9)
	{
		putchar('0' + fig);
		fig++;
	}
	while (con <= 'f')
	{
		putchar(con);
		con++;
	}
	putchar('\n');
	return (0);
}
