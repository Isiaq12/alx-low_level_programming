#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char kp = 'a';

	while (kp <= 'z')
	{
		putchar(kp);
		kp++;
	}
	putchar('\n');
	return (0);
}

