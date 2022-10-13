#include<stdio.h>
#include<stdlib.h>

/**
 * main - Prints the opcodes of this function
 *
 * @argc: argument counts
 * @argv: argument vector
 * Return: Always Success
 */
int main(int argc, char *argv[])
{
	int kunle, i;
	int (*prog)(int, char **) = &main;

	if (argc == 2)
	{
		kunle = atoi(argv[1]);
		if (kunle < 0)
		{
			printf("Error\n");
			exit(2);
		}
		for (i = 0; i < kunle; i++)
			printf("%02x%c", (unsigned char)*((char *)prog + i),
					i < kunle - 1 ? ' ' : '\n');
	}
	else
	{
		printf("Error\n");
		exit(1);
	}
	return (0);
}
