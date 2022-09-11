#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int fig = 0;

	while (fig <= 9)
	{
		putchar(fig + '0');
		fig++;
	}
	putchar('\n');
	return (0);
}
