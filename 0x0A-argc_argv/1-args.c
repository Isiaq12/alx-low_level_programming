#include<stdio.h>

/**
 * main - check the code
 *
 * @argc: argument count
 *
 * @argv: argument string passed
 *
 * Return: Always (0) success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i, aggr;

	for (i = 0; i < argc ; i++)
	{
		aggr = i;
	}
	printf("%d\n", aggr);
	return (0);
}
